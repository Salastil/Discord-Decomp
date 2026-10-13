package t3;

import android.app.Activity;
import android.os.Build;
import androidx.window.layout.WindowMetrics;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.ArrayList;
import kotlin.collections.p;
import kotlin.jvm.internal.Intrinsics;
import u3.f;
import u3.g;

/* loaded from: classes.dex */
public final class c implements b {

    /* renamed from: b, reason: collision with root package name */
    public final f f18170b;

    public c() {
        f densityCompatHelper = Build.VERSION.SDK_INT >= 34 ? g.f18803b : u3.c.f18797f;
        Intrinsics.checkNotNullParameter(densityCompatHelper, "densityCompatHelper");
        this.f18170b = densityCompatHelper;
        Integer[] elements = {1, 2, 4, 8, 16, 32, 64, Integer.valueOf(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT)};
        Intrinsics.checkNotNullParameter(elements, "elements");
        new ArrayList(new p(elements, true));
    }

    public final WindowMetrics a(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        int i5 = Build.VERSION.SDK_INT;
        return (i5 >= 34 ? u3.c.f18799h : i5 >= 30 ? u3.c.f18798g : u3.c.f18800i).c(activity, this.f18170b);
    }
}
