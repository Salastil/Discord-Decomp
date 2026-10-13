package zk;

import android.content.ComponentName;
import android.content.Context;
import android.content.pm.ComponentInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.res.Resources;
import android.graphics.Typeface;
import android.os.CancellationSignal;
import android.os.Parcel;
import android.os.Parcelable;
import android.text.InputFilter;
import android.text.method.TransformationMethod;
import android.util.Base64;
import android.view.animation.LinearInterpolator;
import bf.t;
import bs.d;
import bs.h1;
import bs.j0;
import bs.o1;
import bs.p1;
import bs.w0;
import bs.w1;
import com.facebook.imagepipeline.nativecode.c;
import com.facebook.react.common.assets.ReactFontManager;
import com.google.android.exoplayer2.metadata.Metadata;
import fo.v;
import go.i;
import hc.g1;
import io.sentry.util.m;
import iq.l;
import iq.y;
import java.io.File;
import java.io.InputStream;
import java.lang.reflect.Field;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import ke.w;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.collections.e1;
import kotlin.collections.h0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;
import kotlin.reflect.KType;
import kotlinx.coroutines.channels.Channel;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.modules.SerializersModule;
import m3.n;
import ni.g;
import ni.j;
import pr.k;
import pr.q;
import rq.o;
import s4.h;
import xr.f;
import zo.c0;

/* loaded from: classes3.dex */
public abstract class a {
    public static boolean a = false;

    /* renamed from: b, reason: collision with root package name */
    public static Field f21270b;

    /* renamed from: c, reason: collision with root package name */
    public static boolean f21271c;

    /* renamed from: d, reason: collision with root package name */
    public static Class f21272d;

    /* renamed from: e, reason: collision with root package name */
    public static boolean f21273e;

    /* renamed from: f, reason: collision with root package name */
    public static Field f21274f;

    /* renamed from: g, reason: collision with root package name */
    public static boolean f21275g;

    /* renamed from: h, reason: collision with root package name */
    public static Field f21276h;

    /* renamed from: i, reason: collision with root package name */
    public static boolean f21277i;

    public a() {
        new ConcurrentHashMap();
    }

    public static final Object A(Set set, Enum r22, Enum r32, Enum r42, boolean z5) {
        Set l02;
        if (!z5) {
            if (r42 != null && (l02 = CollectionsKt.l0(e1.e(set, r42))) != null) {
                set = l02;
            }
            return CollectionsKt.a0(set);
        }
        Enum r12 = set.contains(r22) ? r22 : set.contains(r32) ? r32 : null;
        if (Intrinsics.areEqual(r12, r22) && Intrinsics.areEqual(r42, r32)) {
            return null;
        }
        return r42 == null ? r12 : r42;
    }

    public static final KSerializer B(SerializersModule serializersModule, Type type) {
        Intrinsics.checkNotNullParameter(serializersModule, "<this>");
        Intrinsics.checkNotNullParameter(type, "type");
        KSerializer M = c0.M(serializersModule, type, true);
        if (M != null) {
            return M;
        }
        Class G = c0.G(type);
        Intrinsics.checkNotNullParameter(G, "<this>");
        throw new f(h1.j(c.C(G)));
    }

    public static final KSerializer C(SerializersModule serializersModule, KType type) {
        Intrinsics.checkNotNullParameter(serializersModule, "<this>");
        Intrinsics.checkNotNullParameter(type, "type");
        KSerializer N0 = n.N0(serializersModule, type, true);
        if (N0 != null) {
            return N0;
        }
        KClass i5 = h1.i(type);
        Intrinsics.checkNotNullParameter(i5, "<this>");
        Intrinsics.checkNotNullParameter(i5, "<this>");
        throw new f(h1.j(i5));
    }

    public static final KSerializer D(KClass kClass) {
        Intrinsics.checkNotNullParameter(kClass, "<this>");
        Intrinsics.checkNotNullParameter(kClass, "<this>");
        KSerializer[] args = new KSerializer[0];
        Intrinsics.checkNotNullParameter(kClass, "<this>");
        Intrinsics.checkNotNullParameter(args, "args");
        KSerializer d6 = h1.d(c.z(kClass), (KSerializer[]) Arrays.copyOf(args, 0));
        if (d6 != null) {
            return d6;
        }
        i iVar = o1.a;
        Intrinsics.checkNotNullParameter(kClass, "<this>");
        return (KSerializer) o1.a.get(kClass);
    }

    public static final ArrayList E(SerializersModule serializersModule, List typeArguments, boolean z5) {
        Intrinsics.checkNotNullParameter(serializersModule, "<this>");
        Intrinsics.checkNotNullParameter(typeArguments, "typeArguments");
        if (z5) {
            ArrayList arrayList = new ArrayList(d0.l(typeArguments, 10));
            Iterator it = typeArguments.iterator();
            while (it.hasNext()) {
                arrayList.add(C(serializersModule, (KType) it.next()));
            }
            return arrayList;
        }
        ArrayList arrayList2 = new ArrayList(d0.l(typeArguments, 10));
        Iterator it2 = typeArguments.iterator();
        while (it2.hasNext()) {
            KType type = (KType) it2.next();
            Intrinsics.checkNotNullParameter(serializersModule, "<this>");
            Intrinsics.checkNotNullParameter(type, "type");
            KSerializer N0 = n.N0(serializersModule, type, false);
            if (N0 == null) {
                return null;
            }
            arrayList2.add(N0);
        }
        return arrayList2;
    }

    public static CopyOnWriteArrayList M(CopyOnWriteArrayList copyOnWriteArrayList) {
        ArrayList arrayList = new ArrayList();
        if (copyOnWriteArrayList != null) {
            Iterator it = copyOnWriteArrayList.iterator();
            if (it.hasNext()) {
                throw h.b(it);
            }
        }
        return new CopyOnWriteArrayList(arrayList);
    }

    public static boolean N(int i5, w wVar, boolean z5) {
        if (wVar.a() < 7) {
            if (z5) {
                return false;
            }
            throw g1.a("too short header: " + wVar.a(), null);
        }
        if (wVar.u() != i5) {
            if (z5) {
                return false;
            }
            throw g1.a("expected header type " + Integer.toHexString(i5), null);
        }
        if (wVar.u() == 118 && wVar.u() == 111 && wVar.u() == 114 && wVar.u() == 98 && wVar.u() == 105 && wVar.u() == 115) {
            return true;
        }
        if (z5) {
            return false;
        }
        throw g1.a("expected characters 'vorbis'", null);
    }

    public static pr.h a(int i5, int i6, pr.a aVar) {
        if ((i6 & 2) != 0) {
            aVar = pr.a.f16467d;
        }
        if (i5 == -2) {
            if (aVar != pr.a.f16467d) {
                return new q(1, aVar);
            }
            Channel.j.getClass();
            return new pr.h(k.f16506b);
        }
        if (i5 != -1) {
            return i5 != 0 ? i5 != Integer.MAX_VALUE ? aVar == pr.a.f16467d ? new pr.h(i5) : new q(i5, aVar) : new pr.h(Integer.MAX_VALUE) : aVar == pr.a.f16467d ? new pr.h(0) : new q(1, aVar);
        }
        if (aVar == pr.a.f16467d) {
            return new q(1, pr.a.f16468e);
        }
        throw new IllegalArgumentException("CONFLATED capacity cannot be used with non-default onBufferOverflow");
    }

    public static void b(PackageManager packageManager, ComponentName componentName) {
        ComponentInfo componentInfo;
        int componentEnabledSetting = packageManager.getComponentEnabledSetting(componentName);
        if (componentEnabledSetting != 1) {
            if (componentEnabledSetting != 2) {
                String packageName = componentName.getPackageName();
                String className = componentName.getClassName();
                try {
                    PackageInfo packageInfo = packageManager.getPackageInfo(packageName, 516);
                    ComponentInfo[][] componentInfoArr = {packageInfo.activities, packageInfo.services, packageInfo.providers};
                    int i5 = 0;
                    loop0: while (true) {
                        if (i5 >= 3) {
                            componentInfo = null;
                            break;
                        }
                        ComponentInfo[] componentInfoArr2 = componentInfoArr[i5];
                        if (componentInfoArr2 != null) {
                            int length = componentInfoArr2.length;
                            for (int i6 = 0; i6 < length; i6++) {
                                componentInfo = componentInfoArr2[i6];
                                if (componentInfo.name.equals(className)) {
                                    break loop0;
                                }
                            }
                        }
                        i5++;
                    }
                    if (componentInfo != null) {
                        if (componentInfo.isEnabled()) {
                            return;
                        }
                    }
                } catch (PackageManager.NameNotFoundException unused) {
                }
            }
            packageManager.setComponentEnabledSetting(componentName, 1, 1);
        }
    }

    public static final void c(int i5, String str) {
        String msg = "TabsScreen [" + i5 + "] emits event: " + str;
        Intrinsics.checkNotNullParameter("TabsScreenEventEmitter", "tag");
        Intrinsics.checkNotNullParameter(msg, "msg");
    }

    public static ni.b f(String str, String str2) {
        gj.a aVar = new gj.a(str, str2);
        HashSet hashSet = new HashSet();
        HashSet hashSet2 = new HashSet();
        HashSet hashSet3 = new HashSet();
        hashSet.add(ni.q.a(gj.a.class));
        return new ni.b(null, new HashSet(hashSet), new HashSet(hashSet2), 0, 1, new ni.a(0, aVar), hashSet3);
    }

    public static o g(String debugName, List scopes) {
        rq.n nVar;
        Intrinsics.checkNotNullParameter(debugName, "debugName");
        Intrinsics.checkNotNullParameter(scopes, "scopes");
        ir.h scopes2 = new ir.h();
        Iterator it = scopes.iterator();
        while (true) {
            boolean hasNext = it.hasNext();
            nVar = rq.n.f17557b;
            if (!hasNext) {
                break;
            }
            o oVar = (o) it.next();
            if (oVar != nVar) {
                if (oVar instanceof rq.a) {
                    h0.q(scopes2, ((rq.a) oVar).f17523c);
                } else {
                    scopes2.add(oVar);
                }
            }
        }
        Intrinsics.checkNotNullParameter(debugName, "debugName");
        Intrinsics.checkNotNullParameter(scopes2, "scopes");
        int i5 = scopes2.f12264d;
        return i5 != 0 ? i5 != 1 ? new rq.a(debugName, (o[]) scopes2.toArray(new o[0])) : (o) scopes2.get(0) : nVar;
    }

    public static cf.b m(byte[] bArr, Parcelable.Creator creator) {
        t.g(creator);
        Parcel obtain = Parcel.obtain();
        obtain.unmarshall(bArr, 0, bArr.length);
        obtain.setDataPosition(0);
        cf.b bVar = (cf.b) creator.createFromParcel(obtain);
        obtain.recycle();
        return bVar;
    }

    public static void n(ArrayList arrayList) {
        HashMap hashMap = new HashMap(arrayList.size());
        Iterator it = arrayList.iterator();
        while (true) {
            int i5 = 0;
            if (!it.hasNext()) {
                Iterator it2 = hashMap.values().iterator();
                while (it2.hasNext()) {
                    for (g gVar : (Set) it2.next()) {
                        for (ni.i iVar : gVar.a.f15481c) {
                            if (iVar.f15498c == 0) {
                                Set<g> set = (Set) hashMap.get(new ni.h(iVar.a, iVar.f15497b == 2));
                                if (set != null) {
                                    for (g gVar2 : set) {
                                        gVar.f15494b.add(gVar2);
                                        gVar2.f15495c.add(gVar);
                                    }
                                }
                            }
                        }
                    }
                }
                HashSet hashSet = new HashSet();
                Iterator it3 = hashMap.values().iterator();
                while (it3.hasNext()) {
                    hashSet.addAll((Set) it3.next());
                }
                HashSet hashSet2 = new HashSet();
                Iterator it4 = hashSet.iterator();
                while (it4.hasNext()) {
                    g gVar3 = (g) it4.next();
                    if (gVar3.f15495c.isEmpty()) {
                        hashSet2.add(gVar3);
                    }
                }
                while (!hashSet2.isEmpty()) {
                    g gVar4 = (g) hashSet2.iterator().next();
                    hashSet2.remove(gVar4);
                    i5++;
                    Iterator it5 = gVar4.f15494b.iterator();
                    while (it5.hasNext()) {
                        g gVar5 = (g) it5.next();
                        gVar5.f15495c.remove(gVar4);
                        if (gVar5.f15495c.isEmpty()) {
                            hashSet2.add(gVar5);
                        }
                    }
                }
                if (i5 == arrayList.size()) {
                    return;
                }
                ArrayList arrayList2 = new ArrayList();
                Iterator it6 = hashSet.iterator();
                while (it6.hasNext()) {
                    g gVar6 = (g) it6.next();
                    if (!gVar6.f15495c.isEmpty() && !gVar6.f15494b.isEmpty()) {
                        arrayList2.add(gVar6.a);
                    }
                }
                throw new j("Dependency cycle detected: " + Arrays.toString(arrayList2.toArray()));
            }
            ni.b bVar = (ni.b) it.next();
            g gVar7 = new g(bVar);
            for (ni.q qVar : bVar.f15480b) {
                boolean z5 = bVar.f15483e == 0;
                ni.h hVar = new ni.h(qVar, !z5);
                if (!hashMap.containsKey(hVar)) {
                    hashMap.put(hVar, new HashSet());
                }
                Set set2 = (Set) hashMap.get(hVar);
                if (!set2.isEmpty() && z5) {
                    throw new IllegalArgumentException("Multiple components provide " + qVar + ".");
                }
                set2.add(gVar7);
            }
        }
    }

    public static ni.b p(String str, m mVar) {
        HashSet hashSet = new HashSet();
        HashSet hashSet2 = new HashSet();
        HashSet hashSet3 = new HashSet();
        hashSet.add(ni.q.a(gj.a.class));
        for (Class cls : new Class[0]) {
            c0.h(cls, "Null interface");
            hashSet.add(ni.q.a(cls));
        }
        ni.i a10 = ni.i.a(Context.class);
        if (hashSet.contains(a10.a)) {
            throw new IllegalArgumentException("Components are not allowed to depend on interfaces they themselves provide.");
        }
        hashSet2.add(a10);
        return new ni.b(null, new HashSet(hashSet), new HashSet(hashSet2), 0, 1, new cc.i(13, str, mVar), hashSet3);
    }

    public static final Object q(iq.k kVar, iq.m extension) {
        Intrinsics.checkNotNullParameter(kVar, "<this>");
        Intrinsics.checkNotNullParameter(extension, "extension");
        if (kVar.l(extension)) {
            return kVar.k(extension);
        }
        return null;
    }

    public static final Object r(iq.k kVar, iq.m extension, int i5) {
        Intrinsics.checkNotNullParameter(kVar, "<this>");
        Intrinsics.checkNotNullParameter(extension, "extension");
        kVar.o(extension);
        iq.h hVar = kVar.f12228d;
        l lVar = extension.f12234d;
        hVar.getClass();
        y yVar = hVar.a;
        if (!lVar.f12231i) {
            throw new IllegalArgumentException("getRepeatedField() can only be called on repeated fields.");
        }
        Object obj = yVar.get(lVar);
        if (i5 >= (obj == null ? 0 : ((List) obj).size())) {
            return null;
        }
        kVar.o(extension);
        if (!lVar.f12231i) {
            throw new IllegalArgumentException("getRepeatedField() can only be called on repeated fields.");
        }
        Object obj2 = yVar.get(lVar);
        if (obj2 != null) {
            return extension.a(((List) obj2).get(i5));
        }
        throw new IndexOutOfBoundsException();
    }

    public static final KSerializer x(KClass rootClass, ArrayList serializers, Function0 elementClassifierIfArray) {
        KSerializer dVar;
        KSerializer p1Var;
        Intrinsics.checkNotNullParameter(rootClass, "<this>");
        Intrinsics.checkNotNullParameter(serializers, "serializers");
        Intrinsics.checkNotNullParameter(elementClassifierIfArray, "elementClassifierIfArray");
        if (Intrinsics.areEqual(rootClass, Reflection.getOrCreateKotlinClass(Collection.class)) || Intrinsics.areEqual(rootClass, Reflection.getOrCreateKotlinClass(List.class)) || Intrinsics.areEqual(rootClass, Reflection.getOrCreateKotlinClass(List.class)) || Intrinsics.areEqual(rootClass, Reflection.getOrCreateKotlinClass(ArrayList.class))) {
            dVar = new d((KSerializer) serializers.get(0), 0);
        } else if (Intrinsics.areEqual(rootClass, Reflection.getOrCreateKotlinClass(HashSet.class))) {
            dVar = new d((KSerializer) serializers.get(0), 1);
        } else if (Intrinsics.areEqual(rootClass, Reflection.getOrCreateKotlinClass(Set.class)) || Intrinsics.areEqual(rootClass, Reflection.getOrCreateKotlinClass(Set.class)) || Intrinsics.areEqual(rootClass, Reflection.getOrCreateKotlinClass(LinkedHashSet.class))) {
            dVar = new d((KSerializer) serializers.get(0), 2);
        } else if (Intrinsics.areEqual(rootClass, Reflection.getOrCreateKotlinClass(HashMap.class))) {
            dVar = new j0((KSerializer) serializers.get(0), (KSerializer) serializers.get(1), 0);
        } else if (Intrinsics.areEqual(rootClass, Reflection.getOrCreateKotlinClass(Map.class)) || Intrinsics.areEqual(rootClass, Reflection.getOrCreateKotlinClass(Map.class)) || Intrinsics.areEqual(rootClass, Reflection.getOrCreateKotlinClass(LinkedHashMap.class))) {
            dVar = new j0((KSerializer) serializers.get(0), (KSerializer) serializers.get(1), 1);
        } else {
            if (Intrinsics.areEqual(rootClass, Reflection.getOrCreateKotlinClass(Map.Entry.class))) {
                KSerializer keySerializer = (KSerializer) serializers.get(0);
                KSerializer valueSerializer = (KSerializer) serializers.get(1);
                Intrinsics.checkNotNullParameter(keySerializer, "keySerializer");
                Intrinsics.checkNotNullParameter(valueSerializer, "valueSerializer");
                p1Var = new w0(keySerializer, valueSerializer, 0);
            } else if (Intrinsics.areEqual(rootClass, Reflection.getOrCreateKotlinClass(Pair.class))) {
                KSerializer keySerializer2 = (KSerializer) serializers.get(0);
                KSerializer valueSerializer2 = (KSerializer) serializers.get(1);
                Intrinsics.checkNotNullParameter(keySerializer2, "keySerializer");
                Intrinsics.checkNotNullParameter(valueSerializer2, "valueSerializer");
                p1Var = new w0(keySerializer2, valueSerializer2, 1);
            } else if (Intrinsics.areEqual(rootClass, Reflection.getOrCreateKotlinClass(v.class))) {
                KSerializer aSerializer = (KSerializer) serializers.get(0);
                KSerializer bSerializer = (KSerializer) serializers.get(1);
                KSerializer cSerializer = (KSerializer) serializers.get(2);
                Intrinsics.checkNotNullParameter(aSerializer, "aSerializer");
                Intrinsics.checkNotNullParameter(bSerializer, "bSerializer");
                Intrinsics.checkNotNullParameter(cSerializer, "cSerializer");
                dVar = new w1(aSerializer, bSerializer, cSerializer);
            } else {
                Intrinsics.checkNotNullParameter(rootClass, "rootClass");
                if (c.z(rootClass).isArray()) {
                    Object invoke = elementClassifierIfArray.invoke();
                    Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.reflect.KClass<kotlin.Any>");
                    KClass kClass = (KClass) invoke;
                    KSerializer elementSerializer = (KSerializer) serializers.get(0);
                    Intrinsics.checkNotNullParameter(kClass, "kClass");
                    Intrinsics.checkNotNullParameter(elementSerializer, "elementSerializer");
                    p1Var = new p1(kClass, elementSerializer);
                } else {
                    dVar = null;
                }
            }
            dVar = p1Var;
        }
        if (dVar != null) {
            return dVar;
        }
        KSerializer[] kSerializerArr = (KSerializer[]) serializers.toArray(new KSerializer[0]);
        KSerializer[] args = (KSerializer[]) Arrays.copyOf(kSerializerArr, kSerializerArr.length);
        Intrinsics.checkNotNullParameter(rootClass, "<this>");
        Intrinsics.checkNotNullParameter(args, "args");
        return h1.d(c.z(rootClass), (KSerializer[]) Arrays.copyOf(args, args.length));
    }

    public static Metadata y(List list) {
        ArrayList arrayList = new ArrayList();
        for (int i5 = 0; i5 < list.size(); i5++) {
            String str = (String) list.get(i5);
            int i6 = ke.d0.a;
            String[] split = str.split("=", 2);
            if (split.length != 2) {
                ke.b.N("VorbisUtil", "Failed to parse Vorbis comment: ".concat(str));
            } else if (split[0].equals("METADATA_BLOCK_PICTURE")) {
                try {
                    arrayList.add(gd.b.a(new w(Base64.decode(split[1], 0))));
                } catch (RuntimeException e9) {
                    ke.b.O("VorbisUtil", "Failed to parse vorbis picture", e9);
                }
            } else {
                arrayList.add(new ld.a(split[0], split[1]));
            }
        }
        if (arrayList.isEmpty()) {
            return null;
        }
        return new Metadata(arrayList);
    }

    public static ve.i z(w wVar, boolean z5, boolean z6) {
        if (z5) {
            N(3, wVar, false);
        }
        wVar.s((int) wVar.l(), ei.d.f8100c);
        long l6 = wVar.l();
        String[] strArr = new String[(int) l6];
        for (int i5 = 0; i5 < l6; i5++) {
            strArr[i5] = wVar.s((int) wVar.l(), ei.d.f8100c);
        }
        if (z6 && (wVar.u() & 1) == 0) {
            throw g1.a("framing bit expected to be set", null);
        }
        return new ve.i(strArr);
    }

    public abstract void F(boolean z5);

    public abstract void H(boolean z5);

    public abstract void I(boolean z5);

    public abstract void J();

    public abstract void K(Object obj, float f2);

    public abstract void L(int i5);

    public abstract TransformationMethod O(TransformationMethod transformationMethod);

    public abstract String d();

    public abstract void e(LinearInterpolator linearInterpolator, CancellationSignal cancellationSignal, ul.a aVar);

    public abstract Typeface h(Context context, a1.f fVar, Resources resources, int i5);

    public abstract Typeface i(Context context, i1.g[] gVarArr, int i5);

    public Typeface j(Context context, List list, int i5) {
        throw new IllegalStateException("createFromFontInfoWithFallback must only be called on API 29+");
    }

    public Typeface k(Context context, InputStream inputStream) {
        File A = c0.A(context);
        if (A == null) {
            return null;
        }
        try {
            if (c0.q(inputStream, A)) {
                return Typeface.createFromFile(A.getPath());
            }
            return null;
        } catch (RuntimeException unused) {
            return null;
        } finally {
            A.delete();
        }
    }

    public Typeface l(Context context, Resources resources, int i5, String str, int i6) {
        File A = c0.A(context);
        if (A == null) {
            return null;
        }
        try {
            if (c0.p(A, resources, i5)) {
                return Typeface.createFromFile(A.getPath());
            }
            return null;
        } catch (RuntimeException unused) {
            return null;
        } finally {
            A.delete();
        }
    }

    public i1.g o(i1.g[] gVarArr, int i5) {
        int i6 = (i5 & 1) == 0 ? ReactFontManager.TypefaceStyle.NORMAL : ReactFontManager.TypefaceStyle.BOLD;
        boolean z5 = (i5 & 2) != 0;
        i1.g gVar = null;
        int i10 = Integer.MAX_VALUE;
        for (i1.g gVar2 : gVarArr) {
            int abs = (Math.abs(gVar2.f10454c - i6) * 2) + (gVar2.f10455d == z5 ? 0 : 1);
            if (gVar == null || i10 > abs) {
                gVar = gVar2;
                i10 = abs;
            }
        }
        return gVar;
    }

    public abstract InputFilter[] s(InputFilter[] inputFilterArr);

    public abstract float t(Object obj);

    public abstract void u(int i5);

    public abstract boolean v();

    public abstract boolean w();

    public void G(boolean z5) {
    }
}
