package fi;

import java.util.Comparator;
import java.util.SortedMap;
import java.util.SortedSet;

/* loaded from: classes3.dex */
public class j extends e implements SortedSet {

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ n0 f8670i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j(n0 n0Var, SortedMap sortedMap) {
        super(n0Var, sortedMap);
        this.f8670i = n0Var;
    }

    public SortedMap a() {
        return (SortedMap) this.f8654d;
    }

    @Override // java.util.SortedSet
    public final Comparator comparator() {
        return a().comparator();
    }

    @Override // java.util.SortedSet
    public final Object first() {
        return a().firstKey();
    }

    public SortedSet headSet(Object obj) {
        return new j(this.f8670i, a().headMap(obj));
    }

    @Override // java.util.SortedSet
    public final Object last() {
        return a().lastKey();
    }

    public SortedSet subSet(Object obj, Object obj2) {
        return new j(this.f8670i, a().subMap(obj, obj2));
    }

    public SortedSet tailSet(Object obj) {
        return new j(this.f8670i, a().tailMap(obj));
    }
}
