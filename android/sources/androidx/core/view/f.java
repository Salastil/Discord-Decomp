package androidx.core.view;

import android.content.ClipData;
import android.net.Uri;
import android.os.Bundle;
import android.view.ContentInfo;
import java.util.Locale;

/* loaded from: classes.dex */
public final class f implements e, g {
    public final /* synthetic */ int a = 0;

    /* renamed from: b, reason: collision with root package name */
    public ClipData f1580b;

    /* renamed from: c, reason: collision with root package name */
    public int f1581c;

    /* renamed from: d, reason: collision with root package name */
    public int f1582d;

    /* renamed from: e, reason: collision with root package name */
    public Uri f1583e;

    /* renamed from: f, reason: collision with root package name */
    public Bundle f1584f;

    public /* synthetic */ f() {
    }

    @Override // androidx.core.view.e
    public void a(Uri uri) {
        this.f1583e = uri;
    }

    @Override // androidx.core.view.e
    public void b(int i5) {
        this.f1582d = i5;
    }

    @Override // androidx.core.view.e
    public ContentInfoCompat build() {
        return new ContentInfoCompat(new f(this));
    }

    @Override // androidx.core.view.e
    public void c(ClipData clipData) {
        this.f1580b = clipData;
    }

    @Override // androidx.core.view.g
    public int d() {
        return this.f1581c;
    }

    @Override // androidx.core.view.g
    public Uri e() {
        return this.f1583e;
    }

    @Override // androidx.core.view.g
    public ClipData f() {
        return this.f1580b;
    }

    @Override // androidx.core.view.g
    public int g() {
        return this.f1582d;
    }

    @Override // androidx.core.view.g
    public Bundle getExtras() {
        return this.f1584f;
    }

    @Override // androidx.core.view.g
    public ContentInfo h() {
        return null;
    }

    @Override // androidx.core.view.e
    public void setExtras(Bundle bundle) {
        this.f1584f = bundle;
    }

    public String toString() {
        String str;
        switch (this.a) {
            case 1:
                Uri uri = this.f1583e;
                StringBuilder sb2 = new StringBuilder("ContentInfoCompat{clip=");
                sb2.append(this.f1580b.getDescription());
                sb2.append(", source=");
                int i5 = this.f1581c;
                sb2.append(i5 != 0 ? i5 != 1 ? i5 != 2 ? i5 != 3 ? i5 != 4 ? i5 != 5 ? String.valueOf(i5) : "SOURCE_PROCESS_TEXT" : "SOURCE_AUTOFILL" : "SOURCE_DRAG_AND_DROP" : "SOURCE_INPUT_METHOD" : "SOURCE_CLIPBOARD" : "SOURCE_APP");
                sb2.append(", flags=");
                int i6 = this.f1582d;
                sb2.append((i6 & 1) != 0 ? "FLAG_CONVERT_TO_PLAIN_TEXT" : String.valueOf(i6));
                if (uri == null) {
                    str = "";
                } else {
                    str = ", hasLinkUri(" + uri.toString().length() + ")";
                }
                sb2.append(str);
                return com.discord.chat.bridge.botuikit.a.j(sb2, this.f1584f != null ? ", hasExtras" : "", "}");
            default:
                return super.toString();
        }
    }

    public f(f fVar) {
        ClipData clipData = fVar.f1580b;
        clipData.getClass();
        this.f1580b = clipData;
        int i5 = fVar.f1581c;
        if (i5 < 0) {
            Locale locale = Locale.US;
            throw new IllegalArgumentException("source is out of range of [0, 5] (too low)");
        }
        if (i5 > 5) {
            Locale locale2 = Locale.US;
            throw new IllegalArgumentException("source is out of range of [0, 5] (too high)");
        }
        this.f1581c = i5;
        int i6 = fVar.f1582d;
        if ((i6 & 1) == i6) {
            this.f1582d = i6;
            this.f1583e = fVar.f1583e;
            this.f1584f = fVar.f1584f;
        } else {
            throw new IllegalArgumentException("Requested flags 0x" + Integer.toHexString(i6) + ", but only 0x" + Integer.toHexString(1) + " are allowed");
        }
    }
}
