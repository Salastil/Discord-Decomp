package fi;

import java.util.Comparator;
import java.util.SortedMap;
import java.util.SortedSet;

/* loaded from: classes3.dex */
public class i extends d implements SortedMap {

    /* renamed from: w, reason: collision with root package name */
    public SortedSet f8663w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ n0 f8664x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i(n0 n0Var, SortedMap sortedMap) {
        super(n0Var, sortedMap);
        this.f8664x = n0Var;
    }

    public SortedSet b() {
        return new j(this.f8664x, d());
    }

    @Override // fi.d, java.util.AbstractMap, java.util.Map
    /* renamed from: c, reason: merged with bridge method [inline-methods] */
    public SortedSet keySet() {
        SortedSet sortedSet = this.f8663w;
        if (sortedSet != null) {
            return sortedSet;
        }
        SortedSet b10 = b();
        this.f8663w = b10;
        return b10;
    }

    @Override // java.util.SortedMap
    public final Comparator comparator() {
        return d().comparator();
    }

    public SortedMap d() {
        return (SortedMap) this.f8648i;
    }

    @Override // java.util.SortedMap
    public final Object firstKey() {
        return d().firstKey();
    }

    public SortedMap headMap(Object obj) {
        return new i(this.f8664x, d().headMap(obj));
    }

    @Override // java.util.SortedMap
    public final Object lastKey() {
        return d().lastKey();
    }

    public SortedMap subMap(Object obj, Object obj2) {
        return new i(this.f8664x, d().subMap(obj, obj2));
    }

    public SortedMap tailMap(Object obj) {
        return new i(this.f8664x, d().tailMap(obj));
    }
}
