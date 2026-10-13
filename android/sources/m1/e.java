package m1;

import android.content.ClipDescription;
import android.net.Uri;
import android.view.inputmethod.InputContentInfo;

/* loaded from: classes.dex */
public final class e implements f {

    /* renamed from: d, reason: collision with root package name */
    public final InputContentInfo f14315d;

    public e(Object obj) {
        this.f14315d = (InputContentInfo) obj;
    }

    @Override // m1.f
    public final Uri a() {
        return this.f14315d.getContentUri();
    }

    @Override // m1.f
    public final void b() {
        this.f14315d.requestPermission();
    }

    @Override // m1.f
    public final Object c() {
        return this.f14315d;
    }

    @Override // m1.f
    public final Uri e() {
        return this.f14315d.getLinkUri();
    }

    @Override // m1.f
    public final ClipDescription getDescription() {
        return this.f14315d.getDescription();
    }

    public e(Uri uri, ClipDescription clipDescription, Uri uri2) {
        this.f14315d = new InputContentInfo(uri, clipDescription, uri2);
    }
}
