package androidx.core.view;

import android.view.ContentInfo;
import android.view.OnReceiveContentListener;
import android.view.View;

/* loaded from: classes.dex */
public final class q0 implements OnReceiveContentListener {
    public final s a;

    public q0(s sVar) {
        this.a = sVar;
    }

    public final ContentInfo onReceiveContent(View view, ContentInfo contentInfo) {
        ContentInfoCompat contentInfoCompat = new ContentInfoCompat(new d(contentInfo));
        ContentInfoCompat a = this.a.a(view, contentInfoCompat);
        if (a == null) {
            return null;
        }
        return a == contentInfoCompat ? contentInfo : a.c();
    }
}
