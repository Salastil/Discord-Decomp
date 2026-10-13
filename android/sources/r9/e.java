package r9;

import com.facebook.imagepipeline.bitmaps.PlatformBitmapFactory;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e {

    /* renamed from: d, reason: collision with root package name */
    public static final ConcurrentHashMap f17167d = new ConcurrentHashMap();
    public final PlatformBitmapFactory a;

    /* renamed from: b, reason: collision with root package name */
    public final int f17168b;

    /* renamed from: c, reason: collision with root package name */
    public final int f17169c;

    public e(PlatformBitmapFactory platformBitmapFactory, int i5, int i6) {
        Intrinsics.checkNotNullParameter(platformBitmapFactory, "platformBitmapFactory");
        this.a = platformBitmapFactory;
        this.f17168b = i5;
        this.f17169c = i6;
    }
}
