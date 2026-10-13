package bs;

import java.lang.annotation.Annotation;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Set;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public class j1 implements SerialDescriptor, l {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final h0 f3202b;

    /* renamed from: c, reason: collision with root package name */
    public final int f3203c;

    /* renamed from: d, reason: collision with root package name */
    public int f3204d;

    /* renamed from: e, reason: collision with root package name */
    public final String[] f3205e;

    /* renamed from: f, reason: collision with root package name */
    public final List[] f3206f;

    /* renamed from: g, reason: collision with root package name */
    public ArrayList f3207g;

    /* renamed from: h, reason: collision with root package name */
    public final boolean[] f3208h;

    /* renamed from: i, reason: collision with root package name */
    public Object f3209i;
    public final Object j;
    public final Object k;

    /* renamed from: l, reason: collision with root package name */
    public final Object f3210l;

    public j1(String serialName, h0 h0Var, int i5) {
        Intrinsics.checkNotNullParameter(serialName, "serialName");
        this.a = serialName;
        this.f3202b = h0Var;
        this.f3203c = i5;
        this.f3204d = -1;
        String[] strArr = new String[i5];
        for (int i6 = 0; i6 < i5; i6++) {
            strArr[i6] = "[UNINITIALIZED]";
        }
        this.f3205e = strArr;
        int i10 = this.f3203c;
        this.f3206f = new List[i10];
        this.f3208h = new boolean[i10];
        this.f3209i = kotlin.collections.v0.d();
        fo.m mVar = fo.m.f8827e;
        final int i11 = 0;
        this.j = fo.l.b(mVar, new Function0(this) { // from class: bs.i1

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j1 f3197e;

            {
                this.f3197e = this;
            }

            /* JADX WARN: Type inference failed for: r1v3, types: [java.lang.Object, kotlin.Lazy] */
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                KSerializer[] childSerializers;
                ArrayList arrayList;
                KSerializer[] typeParametersSerializers;
                switch (i11) {
                    case 0:
                        h0 h0Var2 = this.f3197e.f3202b;
                        return (h0Var2 == null || (childSerializers = h0Var2.childSerializers()) == null) ? h1.f3190b : childSerializers;
                    case 1:
                        h0 h0Var3 = this.f3197e.f3202b;
                        if (h0Var3 == null || (typeParametersSerializers = h0Var3.typeParametersSerializers()) == null) {
                            arrayList = null;
                        } else {
                            arrayList = new ArrayList(typeParametersSerializers.length);
                            for (KSerializer kSerializer : typeParametersSerializers) {
                                arrayList.add(kSerializer.getDescriptor());
                            }
                        }
                        return h1.c(arrayList);
                    default:
                        j1 j1Var = this.f3197e;
                        return Integer.valueOf(h1.f(j1Var, (SerialDescriptor[]) j1Var.k.getValue()));
                }
            }
        });
        final int i12 = 1;
        this.k = fo.l.b(mVar, new Function0(this) { // from class: bs.i1

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j1 f3197e;

            {
                this.f3197e = this;
            }

            /* JADX WARN: Type inference failed for: r1v3, types: [java.lang.Object, kotlin.Lazy] */
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                KSerializer[] childSerializers;
                ArrayList arrayList;
                KSerializer[] typeParametersSerializers;
                switch (i12) {
                    case 0:
                        h0 h0Var2 = this.f3197e.f3202b;
                        return (h0Var2 == null || (childSerializers = h0Var2.childSerializers()) == null) ? h1.f3190b : childSerializers;
                    case 1:
                        h0 h0Var3 = this.f3197e.f3202b;
                        if (h0Var3 == null || (typeParametersSerializers = h0Var3.typeParametersSerializers()) == null) {
                            arrayList = null;
                        } else {
                            arrayList = new ArrayList(typeParametersSerializers.length);
                            for (KSerializer kSerializer : typeParametersSerializers) {
                                arrayList.add(kSerializer.getDescriptor());
                            }
                        }
                        return h1.c(arrayList);
                    default:
                        j1 j1Var = this.f3197e;
                        return Integer.valueOf(h1.f(j1Var, (SerialDescriptor[]) j1Var.k.getValue()));
                }
            }
        });
        final int i13 = 2;
        this.f3210l = fo.l.b(mVar, new Function0(this) { // from class: bs.i1

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ j1 f3197e;

            {
                this.f3197e = this;
            }

            /* JADX WARN: Type inference failed for: r1v3, types: [java.lang.Object, kotlin.Lazy] */
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                KSerializer[] childSerializers;
                ArrayList arrayList;
                KSerializer[] typeParametersSerializers;
                switch (i13) {
                    case 0:
                        h0 h0Var2 = this.f3197e.f3202b;
                        return (h0Var2 == null || (childSerializers = h0Var2.childSerializers()) == null) ? h1.f3190b : childSerializers;
                    case 1:
                        h0 h0Var3 = this.f3197e.f3202b;
                        if (h0Var3 == null || (typeParametersSerializers = h0Var3.typeParametersSerializers()) == null) {
                            arrayList = null;
                        } else {
                            arrayList = new ArrayList(typeParametersSerializers.length);
                            for (KSerializer kSerializer : typeParametersSerializers) {
                                arrayList.add(kSerializer.getDescriptor());
                            }
                        }
                        return h1.c(arrayList);
                    default:
                        j1 j1Var = this.f3197e;
                        return Integer.valueOf(h1.f(j1Var, (SerialDescriptor[]) j1Var.k.getValue()));
                }
            }
        });
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final String a() {
        return this.a;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public d9.a b() {
        return zr.j.f21433t;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, java.util.Map] */
    @Override // bs.l
    public final Set c() {
        return this.f3209i.keySet();
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean d() {
        return false;
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, java.util.Map] */
    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final int e(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        Integer num = (Integer) this.f3209i.get(name);
        if (num != null) {
            return num.intValue();
        }
        return -3;
    }

    /* JADX WARN: Type inference failed for: r2v2, types: [java.lang.Object, kotlin.Lazy] */
    /* JADX WARN: Type inference failed for: r6v3, types: [java.lang.Object, kotlin.Lazy] */
    public boolean equals(Object obj) {
        int i5;
        if (this == obj) {
            return true;
        }
        if (obj instanceof j1) {
            SerialDescriptor serialDescriptor = (SerialDescriptor) obj;
            if (Intrinsics.areEqual(this.a, serialDescriptor.a()) && Arrays.equals((SerialDescriptor[]) this.k.getValue(), (SerialDescriptor[]) ((j1) obj).k.getValue())) {
                int f2 = serialDescriptor.f();
                int i6 = this.f3203c;
                if (i6 == f2) {
                    for (0; i5 < i6; i5 + 1) {
                        i5 = (Intrinsics.areEqual(i(i5).a(), serialDescriptor.i(i5).a()) && Intrinsics.areEqual(i(i5).b(), serialDescriptor.i(i5).b())) ? i5 + 1 : 0;
                    }
                    return true;
                }
            }
        }
        return false;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final int f() {
        return this.f3203c;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final String g(int i5) {
        return this.f3205e[i5];
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final List getAnnotations() {
        ArrayList arrayList = this.f3207g;
        return arrayList == null ? kotlin.collections.m0.f13512d : arrayList;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final List h(int i5) {
        List list = this.f3206f[i5];
        return list == null ? kotlin.collections.m0.f13512d : list;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    public int hashCode() {
        return ((Number) this.f3210l.getValue()).intValue();
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public SerialDescriptor i(int i5) {
        return ((KSerializer[]) this.j.getValue())[i5].getDescriptor();
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public boolean isInline() {
        return false;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean j(int i5) {
        return this.f3208h[i5];
    }

    public final void k(String name, boolean z5) {
        Intrinsics.checkNotNullParameter(name, "name");
        int i5 = this.f3204d + 1;
        this.f3204d = i5;
        String[] strArr = this.f3205e;
        strArr[i5] = name;
        this.f3208h[i5] = z5;
        this.f3206f[i5] = null;
        if (i5 == this.f3203c - 1) {
            HashMap hashMap = new HashMap();
            int length = strArr.length;
            for (int i6 = 0; i6 < length; i6++) {
                hashMap.put(strArr[i6], Integer.valueOf(i6));
            }
            this.f3209i = hashMap;
        }
    }

    public final void l(Annotation a) {
        Intrinsics.checkNotNullParameter(a, "a");
        if (this.f3207g == null) {
            this.f3207g = new ArrayList(1);
        }
        ArrayList arrayList = this.f3207g;
        Intrinsics.checkNotNull(arrayList);
        arrayList.add(a);
    }

    public String toString() {
        return CollectionsKt.O(yo.j.i(0, this.f3203c), ", ", s4.h.h(new StringBuilder(), this.a, '('), ")", new e1(1, this), 24);
    }
}
