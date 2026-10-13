package c5;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

/* loaded from: classes.dex */
public final class h {
    public final byte[] a;

    /* renamed from: b, reason: collision with root package name */
    public final Map f3336b;

    /* renamed from: c, reason: collision with root package name */
    public final List f3337c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f3338d;

    public h(byte[] bArr, Map map, List list, boolean z5) {
        this.a = bArr;
        this.f3336b = map;
        if (list == null) {
            this.f3337c = null;
        } else {
            this.f3337c = Collections.unmodifiableList(list);
        }
        this.f3338d = z5;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v1, types: [java.util.TreeMap] */
    /* JADX WARN: Type inference failed for: r0v2, types: [java.util.Map] */
    /* JADX WARN: Type inference failed for: r0v3, types: [java.util.Map] */
    /* JADX WARN: Type inference failed for: r0v4 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public h(byte[] bArr, boolean z5, List list) {
        this(bArr, r0, list, z5);
        ?? treeMap;
        if (list == null) {
            treeMap = 0;
        } else if (list.isEmpty()) {
            treeMap = Collections.EMPTY_MAP;
        } else {
            treeMap = new TreeMap(String.CASE_INSENSITIVE_ORDER);
            Iterator it = list.iterator();
            while (it.hasNext()) {
                f fVar = (f) it.next();
                treeMap.put(fVar.a, fVar.f3330b);
            }
        }
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v1, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r0v2, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v3, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v4 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public h(byte[] bArr, Map map) {
        this(bArr, map, r0, false);
        ?? arrayList;
        if (map == null) {
            arrayList = 0;
        } else if (map.isEmpty()) {
            arrayList = Collections.EMPTY_LIST;
        } else {
            arrayList = new ArrayList(map.size());
            for (Map.Entry entry : map.entrySet()) {
                arrayList.add(new f((String) entry.getKey(), (String) entry.getValue()));
            }
        }
    }
}
