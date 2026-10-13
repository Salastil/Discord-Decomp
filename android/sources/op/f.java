package op;

import java.lang.annotation.Annotation;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f extends e implements yp.a {

    /* renamed from: b, reason: collision with root package name */
    public final Annotation f16160b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(hq.e eVar, Annotation annotation) {
        super(eVar);
        Intrinsics.checkNotNullParameter(annotation, "annotation");
        this.f16160b = annotation;
    }
}
