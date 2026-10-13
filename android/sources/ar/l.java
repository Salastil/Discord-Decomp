package ar;

import java.util.Arrays;
import java.util.List;
import java.util.Set;
import kotlin.collections.c1;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import yq.p0;

/* loaded from: classes3.dex */
public final class l {
    public static final l a = new l();

    /* renamed from: b, reason: collision with root package name */
    public static final e f2692b = e.f2662d;

    /* renamed from: c, reason: collision with root package name */
    public static final a f2693c;

    /* renamed from: d, reason: collision with root package name */
    public static final i f2694d;

    /* renamed from: e, reason: collision with root package name */
    public static final i f2695e;

    /* renamed from: f, reason: collision with root package name */
    public static final Set f2696f;

    static {
        b[] bVarArr = b.f2660d;
        String format = String.format("<Error class: %s>", Arrays.copyOf(new Object[]{"unknown class"}, 1));
        Intrinsics.checkNotNullExpressionValue(format, "format(...)");
        hq.e g6 = hq.e.g(format);
        Intrinsics.checkNotNullExpressionValue(g6, "special(...)");
        f2693c = new a(g6);
        f2694d = c(k.E, new String[0]);
        f2695e = c(k.R, new String[0]);
        f2696f = c1.b(new f());
    }

    public static final g a(h kind, boolean z5, String... formatParams) {
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(formatParams, "formatParams");
        if (!z5) {
            return new g(kind, (String[]) Arrays.copyOf(formatParams, formatParams.length));
        }
        String[] formatParams2 = (String[]) Arrays.copyOf(formatParams, formatParams.length);
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(formatParams2, "formatParams");
        return new m(kind, (String[]) Arrays.copyOf(formatParams2, formatParams2.length));
    }

    public static final g b(h kind, String... formatParams) {
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(formatParams, "formatParams");
        return a(kind, false, (String[]) Arrays.copyOf(formatParams, formatParams.length));
    }

    public static final i c(k kind, String... formatParams) {
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(formatParams, "formatParams");
        m0 arguments = m0.f13512d;
        String[] formatParams2 = (String[]) Arrays.copyOf(formatParams, formatParams.length);
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        Intrinsics.checkNotNullParameter(formatParams2, "formatParams");
        return e(kind, arguments, d(kind, (String[]) Arrays.copyOf(formatParams2, formatParams2.length)), (String[]) Arrays.copyOf(formatParams2, formatParams2.length));
    }

    public static j d(k kind, String... formatParams) {
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(formatParams, "formatParams");
        return new j(kind, (String[]) Arrays.copyOf(formatParams, formatParams.length));
    }

    public static i e(k kind, List arguments, p0 typeConstructor, String... formatParams) {
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        Intrinsics.checkNotNullParameter(typeConstructor, "typeConstructor");
        Intrinsics.checkNotNullParameter(formatParams, "formatParams");
        return new i(typeConstructor, b(h.f2671w, typeConstructor.toString()), kind, arguments, false, (String[]) Arrays.copyOf(formatParams, formatParams.length));
    }

    public static final boolean f(ip.l lVar) {
        if (lVar != null) {
            return (lVar instanceof a) || (lVar.h() instanceof a) || lVar == f2692b;
        }
        return false;
    }
}
