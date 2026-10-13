package el;

import android.graphics.Matrix;
import com.discord.zoom_layout.ZoomLayoutFixed;
import com.otaliastudios.zoom.ZoomEngine;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class j implements d {
    public final /* synthetic */ ZoomLayoutFixed a;

    public j(ZoomLayoutFixed zoomLayoutFixed) {
        this.a = zoomLayoutFixed;
    }

    @Override // el.d
    public final void onIdle(ZoomEngine engine) {
        Intrinsics.checkNotNullParameter(engine, "engine");
    }

    @Override // el.d
    public final void onUpdate(ZoomEngine engine, Matrix matrix) {
        Intrinsics.checkNotNullParameter(engine, "engine");
        Intrinsics.checkNotNullParameter(matrix, "matrix");
        this.a.a();
    }
}
