package i1;

import android.net.Uri;
import com.facebook.react.common.assets.ReactFontManager;

/* loaded from: classes.dex */
public final class g {
    public final Uri a;

    /* renamed from: b, reason: collision with root package name */
    public final int f10453b;

    /* renamed from: c, reason: collision with root package name */
    public final int f10454c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f10455d;

    /* renamed from: e, reason: collision with root package name */
    public final String f10456e;

    /* renamed from: f, reason: collision with root package name */
    public final int f10457f;

    public g(Uri uri, int i5, int i6, boolean z5, int i10) {
        uri.getClass();
        this.a = uri;
        this.f10453b = i5;
        this.f10454c = i6;
        this.f10455d = z5;
        this.f10456e = null;
        this.f10457f = i10;
    }

    public g(String str, String str2) {
        this.a = new Uri.Builder().scheme("systemfont").authority(str).build();
        this.f10453b = 0;
        this.f10454c = ReactFontManager.TypefaceStyle.NORMAL;
        this.f10455d = false;
        this.f10456e = str2;
        this.f10457f = 0;
    }
}
