package cp;

import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.TreeMap;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class i1 implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6909d;

    /* renamed from: e, reason: collision with root package name */
    public final o1 f6910e;

    public /* synthetic */ i1(o1 o1Var, int i5) {
        this.f6909d = i5;
        this.f6910e = o1Var;
    }

    /* JADX WARN: Code restructure failed: missing block: B:80:0x01bc, code lost:
    
        if (nf.e.t((ip.f) r7) == false) goto L68;
     */
    /* JADX WARN: Code restructure failed: missing block: B:88:0x01e5, code lost:
    
        if (r2 != false) goto L68;
     */
    @Override // kotlin.jvm.functions.Function0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invoke() {
        boolean r5;
        Class<?> enclosingClass;
        int i5 = this.f6909d;
        int i6 = 2;
        o1 o1Var = this.f6910e;
        boolean z5 = true;
        switch (i5) {
            case 0:
                hq.b bVar = a2.a;
                ip.m0 e9 = o1Var.e();
                h0 h0Var = o1Var.f6926y;
                zk.a b10 = a2.b(e9);
                if (b10 instanceof m) {
                    m mVar = (m) b10;
                    cq.i0 i0Var = mVar.k;
                    wq.r rVar = mVar.j;
                    iq.g gVar = gq.g.a;
                    gq.d b11 = gq.g.b(i0Var, mVar.f6918m, mVar.f6919n, true);
                    if (b11 != null) {
                        if (rVar.b() != ip.c.f12124e) {
                            ip.l h6 = rVar.h();
                            if (h6 == null) {
                                throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", "companionObject", "kotlin/reflect/jvm/internal/impl/load/java/DescriptorsJvmAbiUtil", "isClassCompanionObjectWithBackingFieldsInOuter"));
                            }
                            if (kq.e.l(h6)) {
                                ip.l h7 = h6.h();
                                if (kq.e.n(h7, ip.g.f12138d) || kq.e.n(h7, ip.g.f12140i)) {
                                    fp.d dVar = fp.d.a;
                                    break;
                                }
                            }
                            if (kq.e.l(rVar.h())) {
                                lp.r rVar2 = rVar.W;
                                if (rVar2 == null || !rVar2.getAnnotations().r(rp.x.a)) {
                                    r5 = rVar.getAnnotations().r(rp.x.a);
                                    break;
                                } else {
                                    r5 = true;
                                    break;
                                }
                            }
                        }
                        z5 = false;
                        if (z5 || gq.g.d(i0Var)) {
                            enclosingClass = h0Var.getJClass().getEnclosingClass();
                        } else {
                            ip.l h10 = rVar.h();
                            enclosingClass = h10 instanceof ip.f ? c2.k((ip.f) h10) : h0Var.getJClass();
                        }
                        if (enclosingClass != null) {
                            try {
                                return enclosingClass.getDeclaredField(b11.f9437v);
                            } catch (NoSuchFieldException unused) {
                            }
                        }
                    }
                } else {
                    if (b10 instanceof k) {
                        return ((k) b10).j;
                    }
                    if (!(b10 instanceof l) && !(b10 instanceof n)) {
                        throw new fo.n();
                    }
                }
                return null;
            default:
                h0 h0Var2 = o1Var.f6926y;
                String name = o1Var.E;
                String signature = o1Var.F;
                h0Var2.getClass();
                Intrinsics.checkNotNullParameter(name, "name");
                Intrinsics.checkNotNullParameter(signature, "signature");
                kotlin.text.m match = h0.f6904d.c(signature);
                if (match != null) {
                    Intrinsics.checkNotNullParameter(match, "match");
                    String str = (String) ((kotlin.collections.z0) match.a()).get(1);
                    ip.m0 f2 = h0Var2.f(Integer.parseInt(str));
                    if (f2 != null) {
                        return f2;
                    }
                    StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("Local property #", str, " not found in ");
                    m5.append(h0Var2.getJClass());
                    throw new u1(m5.toString());
                }
                hq.e e10 = hq.e.e(name);
                Intrinsics.checkNotNullExpressionValue(e10, "identifier(...)");
                Collection i10 = h0Var2.i(e10);
                ArrayList arrayList = new ArrayList();
                for (Object obj : i10) {
                    if (Intrinsics.areEqual(a2.b((ip.m0) obj).d(), signature)) {
                        arrayList.add(obj);
                    }
                }
                if (arrayList.isEmpty()) {
                    StringBuilder t5 = a3.e.t("Property '", name, "' (JVM signature: ", signature, ") not resolved in ");
                    t5.append(h0Var2);
                    throw new u1(t5.toString());
                }
                if (arrayList.size() == 1) {
                    return (ip.m0) CollectionsKt.Z(arrayList);
                }
                LinkedHashMap linkedHashMap = new LinkedHashMap();
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    Object next = it.next();
                    ip.p visibility = ((ip.m0) next).getVisibility();
                    Object obj2 = linkedHashMap.get(visibility);
                    if (obj2 == null) {
                        obj2 = new ArrayList();
                        linkedHashMap.put(visibility, obj2);
                    }
                    ((List) obj2).add(next);
                }
                e comparator = new e(i6);
                Intrinsics.checkNotNullParameter(linkedHashMap, "<this>");
                Intrinsics.checkNotNullParameter(comparator, "comparator");
                TreeMap treeMap = new TreeMap(comparator);
                treeMap.putAll(linkedHashMap);
                Collection values = treeMap.values();
                Intrinsics.checkNotNullExpressionValue(values, "<get-values>(...)");
                List list = (List) CollectionsKt.P(values);
                if (list.size() == 1) {
                    Intrinsics.checkNotNull(list);
                    return (ip.m0) CollectionsKt.K(list);
                }
                hq.e e11 = hq.e.e(name);
                Intrinsics.checkNotNullExpressionValue(e11, "identifier(...)");
                String O = CollectionsKt.O(h0Var2.i(e11), ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE, null, null, b.F, 30);
                StringBuilder t10 = a3.e.t("Property '", name, "' (JVM signature: ", signature, ") not resolved in ");
                t10.append(h0Var2);
                t10.append(':');
                t10.append(O.length() == 0 ? " no members found" : ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE.concat(O));
                throw new u1(t10.toString());
        }
    }
}
