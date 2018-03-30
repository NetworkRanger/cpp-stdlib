namespace MyLib{
	template <typename Cont>
	inline bool replace_key(Cont &c,
							const typename Cont::key_type& old_key,
							const typename Cont::key_type& new_key){
		typename Cont::iterator pos;
		pos = c.find(old_key);
		if(pos != c.end()){
			//insert new element with value of old elemnet
			c.insert(typename Cont::value_type(new_key, pos->second));

			//remove old element
			c.erase(pos);
			return true;
		}else{
			//key not found
			return false;
		}
	}
}
