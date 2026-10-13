package androidx.core.view;

import android.content.ClipData;
import android.graphics.fonts.Font;
import android.view.ContentInfo;

/* loaded from: classes.dex */
public abstract /* synthetic */ class c {
    public static /* synthetic */ Font.Builder a(Font font) {
        return new Font.Builder(font);
    }

    public static /* synthetic */ ContentInfo.Builder b(ClipData clipData, int i5) {
        return new ContentInfo.Builder(clipData, i5);
    }

    public static /* synthetic */ ContentInfo.Builder c(ContentInfo contentInfo) {
        return new ContentInfo.Builder(contentInfo);
    }

    public static /* synthetic */ void d() {
    }
}
