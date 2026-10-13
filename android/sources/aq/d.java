package aq;

import java.util.HashMap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d {
    public final HashMap a;

    /* renamed from: b, reason: collision with root package name */
    public final HashMap f2625b;

    /* renamed from: c, reason: collision with root package name */
    public final HashMap f2626c;

    public d(HashMap memberAnnotations, HashMap propertyConstants, HashMap annotationParametersDefaultValues) {
        Intrinsics.checkNotNullParameter(memberAnnotations, "memberAnnotations");
        Intrinsics.checkNotNullParameter(propertyConstants, "propertyConstants");
        Intrinsics.checkNotNullParameter(annotationParametersDefaultValues, "annotationParametersDefaultValues");
        this.a = memberAnnotations;
        this.f2625b = propertyConstants;
        this.f2626c = annotationParametersDefaultValues;
    }
}
