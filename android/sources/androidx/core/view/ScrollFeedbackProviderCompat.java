package androidx.core.view;

import android.os.Build;
import androidx.core.widget.NestedScrollView;

/* loaded from: classes.dex */
public final class ScrollFeedbackProviderCompat {
    public final w a;

    public ScrollFeedbackProviderCompat(NestedScrollView nestedScrollView) {
        if (Build.VERSION.SDK_INT >= 35) {
            this.a = new v(nestedScrollView);
        } else {
            this.a = new qa.s();
        }
    }
}
