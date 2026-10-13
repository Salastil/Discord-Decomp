package androidx.core.view;

import android.view.ContentInfo;
import android.view.View;

/* loaded from: classes.dex */
public abstract class p0 {
    public static String[] a(View view) {
        return view.getReceiveContentMimeTypes();
    }

    public static ContentInfoCompat b(View view, ContentInfoCompat contentInfoCompat) {
        ContentInfo c6 = contentInfoCompat.c();
        ContentInfo performReceiveContent = view.performReceiveContent(c6);
        if (performReceiveContent == null) {
            return null;
        }
        return performReceiveContent == c6 ? contentInfoCompat : new ContentInfoCompat(new d(performReceiveContent));
    }

    public static void c(View view, String[] strArr, s sVar) {
        if (sVar == null) {
            view.setOnReceiveContentListener(strArr, null);
        } else {
            view.setOnReceiveContentListener(strArr, new q0(sVar));
        }
    }
}
