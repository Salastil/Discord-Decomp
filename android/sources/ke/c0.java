package ke;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.drawable.Drawable;

/* loaded from: classes3.dex */
public abstract class c0 {
    public static Drawable a(Context context, Resources resources, int i5) {
        return resources.getDrawable(i5, context.getTheme());
    }
}
