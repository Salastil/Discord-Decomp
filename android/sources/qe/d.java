package qe;

import android.net.Uri;

/* loaded from: classes3.dex */
public final class d {
    static {
        Uri.Builder builder = new Uri.Builder();
        builder.scheme("uri");
        builder.authority("local");
        builder.build();
    }
}
