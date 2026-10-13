package sp;

import fp.o;
import java.util.ArrayList;
import java.util.EnumSet;
import java.util.Iterator;
import java.util.List;
import jp.m;
import jp.n;
import kotlin.Pair;
import kotlin.collections.d0;
import kotlin.collections.h0;
import kotlin.collections.o0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import op.s;

/* loaded from: classes3.dex */
public abstract class e {
    public static final Object a = v0.g(new Pair("PACKAGE", EnumSet.noneOf(n.class)), new Pair("TYPE", EnumSet.of(n.L, n.X)), new Pair("ANNOTATION_TYPE", EnumSet.of(n.M)), new Pair("TYPE_PARAMETER", EnumSet.of(n.N)), new Pair("FIELD", EnumSet.of(n.P)), new Pair("LOCAL_VARIABLE", EnumSet.of(n.Q)), new Pair("PARAMETER", EnumSet.of(n.R)), new Pair("CONSTRUCTOR", EnumSet.of(n.S)), new Pair("METHOD", EnumSet.of(n.T, n.U, n.V)), new Pair("TYPE_USE", EnumSet.of(n.W)));

    /* renamed from: b, reason: collision with root package name */
    public static final Object f18084b = v0.g(new Pair("RUNTIME", m.f13016d), new Pair("CLASS", m.f13017e), new Pair("SOURCE", m.f13018i));

    /* JADX WARN: Type inference failed for: r2v1, types: [java.lang.Object, java.util.Map] */
    public static mq.b a(List arguments) {
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        ArrayList arrayList = new ArrayList();
        for (Object obj : arguments) {
            if (obj instanceof s) {
                arrayList.add(obj);
            }
        }
        ArrayList arrayList2 = new ArrayList();
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            Iterable iterable = (EnumSet) a.get(hq.e.e(((s) it.next()).f16171b.name()).b());
            if (iterable == null) {
                iterable = o0.f13515d;
            }
            h0.o(arrayList2, iterable);
        }
        ArrayList arrayList3 = new ArrayList(d0.l(arrayList2, 10));
        Iterator it2 = arrayList2.iterator();
        while (it2.hasNext()) {
            n nVar = (n) it2.next();
            hq.c topLevelFqName = o.f8901u;
            Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
            hq.b bVar = new hq.b(topLevelFqName.b(), topLevelFqName.a.f());
            hq.e e9 = hq.e.e(nVar.name());
            Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
            arrayList3.add(new mq.i(bVar, e9));
        }
        return new mq.b(arrayList3, d.f18083d);
    }
}
