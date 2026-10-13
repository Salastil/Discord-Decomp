package ma;

import com.facebook.imagepipeline.image.EncodedImage;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends RuntimeException {

    /* renamed from: d, reason: collision with root package name */
    public final EncodedImage f14417d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(String str, EncodedImage encodedImage) {
        super(str);
        Intrinsics.checkNotNullParameter(encodedImage, "encodedImage");
        this.f14417d = encodedImage;
    }
}
