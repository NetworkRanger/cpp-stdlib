template <typename InputIteartor, typename Tp>
inline InputIterator
find_before(InputIteartor first, InputIteartor last, const Tp& val){
	if(first == last){
		return first;
	}
	InputIteartor next(first);
	++next;
	while(next != last && !(*next == val)){
		++next;
		++first;
	}
	return first;
}

template <typename InputIteartor, typename Pred>
inline InputIterator find_before_if(InputIteartor first, InputIteartor last, Pred pred){
	if(first == last){
		return first;
	}
	InputIteartor next(first);
	++next;
	while(next != last && !pred(*next)){
		++next;
		++first;
	}
	return first;
}
