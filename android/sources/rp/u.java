package rp;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class u {

    /* renamed from: d, reason: collision with root package name */
    public static final u f17488d;
    public final w a;

    /* renamed from: b, reason: collision with root package name */
    public final Function1 f17489b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f17490c;

    /* JADX WARN: Removed duplicated region for block: B:12:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x002b  */
    static {
        c0 globalReportLevel;
        hq.c cVar = r.a;
        fo.k other = fo.k.f8820x;
        Intrinsics.checkNotNullParameter(other, "configuredKotlinVersion");
        s sVar = r.f17483d;
        fo.k kVar = sVar.f17485b;
        if (kVar != null) {
            Intrinsics.checkNotNullParameter(other, "other");
            if (kVar.f8824v - other.f8824v <= 0) {
                globalReportLevel = sVar.f17486c;
                Intrinsics.checkNotNullParameter(globalReportLevel, "globalReportLevel");
                f17488d = new u(new w(globalReportLevel, globalReportLevel != c0.f17432i ? null : globalReportLevel), t.f17487d);
            }
        }
        globalReportLevel = sVar.a;
        Intrinsics.checkNotNullParameter(globalReportLevel, "globalReportLevel");
        f17488d = new u(new w(globalReportLevel, globalReportLevel != c0.f17432i ? null : globalReportLevel), t.f17487d);
    }

    public u(w jsr305, Function1 getReportLevelForAnnotation) {
        Intrinsics.checkNotNullParameter(jsr305, "jsr305");
        Intrinsics.checkNotNullParameter(getReportLevelForAnnotation, "getReportLevelForAnnotation");
        this.a = jsr305;
        this.f17489b = getReportLevelForAnnotation;
        this.f17490c = jsr305.f17493d || getReportLevelForAnnotation.invoke(r.a) == c0.f17431e;
    }

    public final String toString() {
        return "JavaTypeEnhancementState(jsr305=" + this.a + ", getReportLevelForAnnotation=" + this.f17489b + ')';
    }
}
