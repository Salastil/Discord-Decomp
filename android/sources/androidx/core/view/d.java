package androidx.core.view;

import android.content.ClipData;
import android.net.Uri;
import android.os.Bundle;
import android.view.ContentInfo;

/* loaded from: classes.dex */
public final class d implements e, g {
    public final /* synthetic */ int a = 0;

    /* renamed from: b, reason: collision with root package name */
    public final Object f1574b;

    public d(ContentInfo contentInfo) {
        contentInfo.getClass();
        this.f1574b = contentInfo;
    }

    @Override // androidx.core.view.e
    public void a(Uri uri) {
        ((ContentInfo.Builder) this.f1574b).setLinkUri(uri);
    }

    @Override // androidx.core.view.e
    public void b(int i5) {
        ((ContentInfo.Builder) this.f1574b).setFlags(i5);
    }

    @Override // androidx.core.view.e
    public ContentInfoCompat build() {
        return new ContentInfoCompat(new d(((ContentInfo.Builder) this.f1574b).build()));
    }

    @Override // androidx.core.view.e
    public void c(ClipData clipData) {
        ((ContentInfo.Builder) this.f1574b).setClip(clipData);
    }

    @Override // androidx.core.view.g
    public int d() {
        return ((ContentInfo) this.f1574b).getSource();
    }

    @Override // androidx.core.view.g
    public Uri e() {
        return ((ContentInfo) this.f1574b).getLinkUri();
    }

    @Override // androidx.core.view.g
    public ClipData f() {
        return ((ContentInfo) this.f1574b).getClip();
    }

    @Override // androidx.core.view.g
    public int g() {
        return ((ContentInfo) this.f1574b).getFlags();
    }

    @Override // androidx.core.view.g
    public Bundle getExtras() {
        return ((ContentInfo) this.f1574b).getExtras();
    }

    @Override // androidx.core.view.g
    public ContentInfo h() {
        return (ContentInfo) this.f1574b;
    }

    @Override // androidx.core.view.e
    public void setExtras(Bundle bundle) {
        ((ContentInfo.Builder) this.f1574b).setExtras(bundle);
    }

    public String toString() {
        switch (this.a) {
            case 1:
                return "ContentInfoCompat{" + ((ContentInfo) this.f1574b) + "}";
            default:
                return super.toString();
        }
    }

    public d(ClipData clipData, int i5) {
        this.f1574b = c.b(clipData, i5);
    }

    public d(ContentInfoCompat contentInfoCompat) {
        c.d();
        this.f1574b = c.c(contentInfoCompat.c());
    }
}
