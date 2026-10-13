package vp;

import ip.o0;
import java.lang.reflect.GenericArrayType;
import java.lang.reflect.WildcardType;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import lp.r0;
import yq.c1;
import yq.s0;
import yq.x0;

/* loaded from: classes3.dex */
public final class f implements tp.g {

    /* renamed from: h, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f19485h = {com.discord.chat.bridge.botuikit.a.o(f.class, "fqName", "getFqName()Lorg/jetbrains/kotlin/name/FqName;", 0), com.discord.chat.bridge.botuikit.a.o(f.class, "type", "getType()Lorg/jetbrains/kotlin/types/SimpleType;", 0), com.discord.chat.bridge.botuikit.a.o(f.class, "allValueArguments", "getAllValueArguments()Ljava/util/Map;", 0)};
    public final e4.i a;

    /* renamed from: b, reason: collision with root package name */
    public final op.d f19486b;

    /* renamed from: c, reason: collision with root package name */
    public final xq.h f19487c;

    /* renamed from: d, reason: collision with root package name */
    public final xq.i f19488d;

    /* renamed from: e, reason: collision with root package name */
    public final np.f f19489e;

    /* renamed from: f, reason: collision with root package name */
    public final xq.i f19490f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f19491g;

    public f(e4.i c6, op.d javaAnnotation, boolean z5) {
        Intrinsics.checkNotNullParameter(c6, "c");
        Intrinsics.checkNotNullParameter(javaAnnotation, "javaAnnotation");
        this.a = c6;
        this.f19486b = javaAnnotation;
        xq.o oVar = ((up.a) c6.f7952d).a;
        e eVar = new e(this, 0);
        xq.l lVar = (xq.l) oVar;
        lVar.getClass();
        this.f19487c = new xq.h(lVar, eVar);
        up.a aVar = (up.a) c6.f7952d;
        xq.o oVar2 = aVar.a;
        e eVar2 = new e(this, 1);
        xq.l lVar2 = (xq.l) oVar2;
        lVar2.getClass();
        this.f19488d = new xq.i(lVar2, eVar2);
        this.f19489e = aVar.j.b(javaAnnotation);
        xq.o oVar3 = aVar.a;
        e eVar3 = new e(this, 2);
        xq.l lVar3 = (xq.l) oVar3;
        lVar3.getClass();
        this.f19490f = new xq.i(lVar3, eVar3);
        this.f19491g = z5;
    }

    @Override // jp.b
    public final hq.c a() {
        KProperty p3 = f19485h[0];
        xq.h hVar = this.f19487c;
        Intrinsics.checkNotNullParameter(hVar, "<this>");
        Intrinsics.checkNotNullParameter(p3, "p");
        return (hq.c) hVar.invoke();
    }

    @Override // jp.b
    public final Map b() {
        return (Map) ys.d.O(this.f19490f, f19485h[2]);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final mq.g c(yp.a aVar) {
        yq.y type;
        if (aVar instanceof op.u) {
            return mq.h.b(((op.u) aVar).f16172b, null);
        }
        if (aVar instanceof op.s) {
            Enum r92 = ((op.s) aVar).f16171b;
            Class<?> cls = r92.getClass();
            if (!cls.isEnum()) {
                cls = cls.getEnclosingClass();
            }
            Intrinsics.checkNotNull(cls);
            return new mq.i(op.c.a(cls), hq.e.e(r92.name()));
        }
        boolean z5 = aVar instanceof op.g;
        e4.i iVar = this.a;
        if (z5) {
            op.g gVar = (op.g) aVar;
            hq.e eVar = gVar.a;
            if (eVar == null) {
                eVar = rp.y.f17495b;
            }
            Intrinsics.checkNotNull(eVar);
            ArrayList a = gVar.a();
            if (!yq.c.j((yq.c0) ys.d.O(this.f19488d, f19485h[1]))) {
                ip.f d6 = oq.e.d(this);
                Intrinsics.checkNotNull(d6);
                r0 o6 = d9.a.o(eVar, d6);
                if (o6 == null || (type = o6.getType()) == null) {
                    fp.i g6 = ((up.a) iVar.f7952d).f18979o.g();
                    c1 c1Var = c1.f21013i;
                    type = g6.h(ar.l.c(ar.k.a0, new String[0]));
                    Intrinsics.checkNotNullExpressionValue(type, "getArrayType(...)");
                }
                ArrayList value = new ArrayList(kotlin.collections.d0.l(a, 10));
                Iterator it = a.iterator();
                while (it.hasNext()) {
                    mq.g c6 = c((yp.a) it.next());
                    if (c6 == null) {
                        c6 = new mq.v(null);
                    }
                    value.add(c6);
                }
                Intrinsics.checkNotNullParameter(value, "value");
                Intrinsics.checkNotNullParameter(type, "type");
                return new mq.y(value, type);
            }
        } else {
            if (aVar instanceof op.f) {
                f value2 = new f(iVar, new op.d(((op.f) aVar).f16160b), false);
                Intrinsics.checkNotNullParameter(value2, "value");
                return new mq.a((Object) value2);
            }
            if (aVar instanceof op.o) {
                Class type2 = ((op.o) aVar).f16169b;
                Intrinsics.checkNotNullParameter(type2, "type");
                yq.y argumentType = ((k2.r) iVar.f7955v).O(type2.isPrimitive() ? new op.y(type2) : ((type2 instanceof GenericArrayType) || type2.isArray()) ? new op.h(type2) : type2 instanceof WildcardType ? new op.d0((WildcardType) type2) : new op.p(type2), nf.e.D(x0.f21081e, false, null, 7));
                Intrinsics.checkNotNullParameter(argumentType, "argumentType");
                if (!yq.c.j(argumentType)) {
                    yq.y yVar = argumentType;
                    int i5 = 0;
                    while (fp.i.z(yVar)) {
                        yVar = ((s0) CollectionsKt.Z(yVar.l0())).b();
                        Intrinsics.checkNotNullExpressionValue(yVar, "getType(...)");
                        i5++;
                    }
                    ip.i a10 = yVar.r0().a();
                    if (a10 instanceof ip.f) {
                        hq.b f2 = oq.e.f(a10);
                        if (f2 != null) {
                            return new mq.t(f2, i5);
                        }
                        mq.q value3 = new mq.q(argumentType);
                        Intrinsics.checkNotNullParameter(value3, "value");
                        return new mq.t(value3);
                    }
                    if (a10 instanceof ip.s0) {
                        hq.c topLevelFqName = fp.o.a.g();
                        Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
                        return new mq.t(new hq.b(topLevelFqName.b(), topLevelFqName.a.f()), 0);
                    }
                }
            }
        }
        return null;
    }

    @Override // jp.b
    public final o0 d() {
        return this.f19489e;
    }

    @Override // jp.b
    public final yq.y getType() {
        return (yq.c0) ys.d.O(this.f19488d, f19485h[1]);
    }

    public final String toString() {
        return jq.f.a.w(this, null);
    }
}
