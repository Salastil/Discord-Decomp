package ja;

import android.net.Uri;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class i {
    public static final String a(Uri uri) {
        String uri2 = uri.toString();
        Intrinsics.checkNotNullExpressionValue(uri2, "toString(...)");
        if (uri2.length() <= 30) {
            return uri2;
        }
        String substring = uri2.substring(0, 30);
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        return substring + "...";
    }
}
