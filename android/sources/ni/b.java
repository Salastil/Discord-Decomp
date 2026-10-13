package ni;

import hc.s0;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;
import zo.c0;

/* loaded from: classes3.dex */
public final class b {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final Set f15480b;

    /* renamed from: c, reason: collision with root package name */
    public final Set f15481c;

    /* renamed from: d, reason: collision with root package name */
    public final int f15482d;

    /* renamed from: e, reason: collision with root package name */
    public final int f15483e;

    /* renamed from: f, reason: collision with root package name */
    public final e f15484f;

    /* renamed from: g, reason: collision with root package name */
    public final Set f15485g;

    public b(String str, Set set, Set set2, int i5, int i6, e eVar, Set set3) {
        this.a = str;
        this.f15480b = Collections.unmodifiableSet(set);
        this.f15481c = Collections.unmodifiableSet(set2);
        this.f15482d = i5;
        this.f15483e = i6;
        this.f15484f = eVar;
        this.f15485g = Collections.unmodifiableSet(set3);
    }

    public static s0 a(q qVar) {
        q[] qVarArr = new q[0];
        s0 s0Var = new s0();
        s0Var.a = null;
        HashSet hashSet = new HashSet();
        s0Var.f9865d = hashSet;
        s0Var.f9866e = new HashSet();
        s0Var.f9863b = 0;
        s0Var.f9864c = 0;
        s0Var.f9868g = new HashSet();
        hashSet.add(qVar);
        for (q qVar2 : qVarArr) {
            c0.h(qVar2, "Null interface");
        }
        Collections.addAll((HashSet) s0Var.f9865d, qVarArr);
        return s0Var;
    }

    public static b b(Object obj, Class cls, Class... clsArr) {
        HashSet hashSet = new HashSet();
        HashSet hashSet2 = new HashSet();
        HashSet hashSet3 = new HashSet();
        hashSet.add(q.a(cls));
        for (Class cls2 : clsArr) {
            c0.h(cls2, "Null interface");
            hashSet.add(q.a(cls2));
        }
        return new b(null, new HashSet(hashSet), new HashSet(hashSet2), 0, 0, new a(0, obj), hashSet3);
    }

    public final String toString() {
        return "Component<" + Arrays.toString(this.f15480b.toArray()) + ">{" + this.f15482d + ", type=" + this.f15483e + ", deps=" + Arrays.toString(this.f15481c.toArray()) + "}";
    }
}
