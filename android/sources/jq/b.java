package jq;

import ip.f0;
import ip.s0;
import java.util.ArrayList;
import kotlin.collections.i0;
import kotlin.jvm.internal.Intrinsics;
import lp.c0;

/* loaded from: classes3.dex */
public final class b implements c {

    /* renamed from: b, reason: collision with root package name */
    public static final b f13037b = new b(0);

    /* renamed from: c, reason: collision with root package name */
    public static final b f13038c = new b(1);

    /* renamed from: d, reason: collision with root package name */
    public static final b f13039d = new b(2);
    public final /* synthetic */ int a;

    public /* synthetic */ b(int i5) {
        this.a = i5;
    }

    public static String b(ip.i iVar) {
        String str;
        hq.e name = iVar.getName();
        Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
        String E = nt.a.E(name);
        if (iVar instanceof s0) {
            return E;
        }
        ip.l h6 = iVar.h();
        Intrinsics.checkNotNullExpressionValue(h6, "getContainingDeclaration(...)");
        if (h6 instanceof ip.f) {
            str = b((ip.i) h6);
        } else if (h6 instanceof f0) {
            hq.d dVar = ((c0) ((f0) h6)).f14132x.a;
            Intrinsics.checkNotNullParameter(dVar, "<this>");
            dVar.getClass();
            str = nt.a.F(hq.d.e(dVar));
        } else {
            str = null;
        }
        if (str == null || Intrinsics.areEqual(str, "")) {
            return E;
        }
        return str + '.' + E;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v0, types: [ip.i, ip.l, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v6, types: [ip.l] */
    /* JADX WARN: Type inference failed for: r2v7, types: [ip.l] */
    @Override // jq.c
    public final String a(ip.i classifier, h renderer) {
        switch (this.a) {
            case 0:
                Intrinsics.checkNotNullParameter(classifier, "classifier");
                Intrinsics.checkNotNullParameter(renderer, "renderer");
                if (classifier instanceof s0) {
                    hq.e name = ((s0) classifier).getName();
                    Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                    return renderer.O(name, false);
                }
                hq.d g6 = kq.e.g(classifier);
                Intrinsics.checkNotNullExpressionValue(g6, "getFqName(...)");
                return renderer.G(g6);
            case 1:
                Intrinsics.checkNotNullParameter(classifier, "classifier");
                Intrinsics.checkNotNullParameter(renderer, "renderer");
                if (classifier instanceof s0) {
                    hq.e name2 = ((s0) classifier).getName();
                    Intrinsics.checkNotNullExpressionValue(name2, "getName(...)");
                    return renderer.O(name2, false);
                }
                ArrayList arrayList = new ArrayList();
                do {
                    arrayList.add(classifier.getName());
                    classifier = classifier.h();
                } while (classifier instanceof ip.f);
                return nt.a.F(i0.y(arrayList));
            default:
                Intrinsics.checkNotNullParameter(classifier, "classifier");
                Intrinsics.checkNotNullParameter(renderer, "renderer");
                return b(classifier);
        }
    }
}
