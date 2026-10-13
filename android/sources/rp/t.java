package rp;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class t extends FunctionReferenceImpl implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public static final t f17487d = new t(1, r.class, "getDefaultReportLevelForAnnotation", "getDefaultReportLevelForAnnotation(Lorg/jetbrains/kotlin/name/FqName;)Lorg/jetbrains/kotlin/load/java/ReportLevel;", 1);

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        hq.c fqName = (hq.c) obj;
        Intrinsics.checkNotNullParameter(fqName, "p0");
        hq.c cVar = r.a;
        Intrinsics.checkNotNullParameter(fqName, "annotationFqName");
        b0.f17429z.getClass();
        e4.r configuredReportLevels = a0.f17426b;
        fo.k other = new fo.k(1, 7, 20);
        Intrinsics.checkNotNullParameter(fqName, "annotation");
        Intrinsics.checkNotNullParameter(configuredReportLevels, "configuredReportLevels");
        Intrinsics.checkNotNullParameter(other, "configuredKotlinVersion");
        configuredReportLevels.getClass();
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        c0 c0Var = (c0) ((xq.j) configuredReportLevels.f8001i).invoke(fqName);
        if (c0Var != null) {
            return c0Var;
        }
        e4.r rVar = r.f17482c;
        rVar.getClass();
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        s sVar = (s) ((xq.j) rVar.f8001i).invoke(fqName);
        if (sVar == null) {
            return c0.f17431e;
        }
        fo.k kVar = sVar.f17485b;
        if (kVar != null) {
            Intrinsics.checkNotNullParameter(other, "other");
            if (kVar.f8824v - other.f8824v <= 0) {
                return sVar.f17486c;
            }
        }
        return sVar.a;
    }
}
