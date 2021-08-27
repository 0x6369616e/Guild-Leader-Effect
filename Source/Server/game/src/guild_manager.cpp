// Search:
		iter->second->Load(dwGID);
// Add (under it):
#ifdef __LEADER_ON_GUILD__
		if (iter->second)
			iter->second->ChangeMaster();
#endif