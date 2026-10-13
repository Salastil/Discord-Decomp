package um;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.drawable.BitmapDrawable;
import android.net.Uri;
import android.util.Log;
import com.discord.chat.presentation.message.view.y;
import com.facebook.common.references.CloseableReference;
import com.facebook.datasource.DataSource;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e extends y8.b {
    public final /* synthetic */ y a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Context f18956b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Uri f18957c;

    public e(y yVar, Context context, Uri uri) {
        this.a = yVar;
        this.f18956b = context;
        this.f18957c = uri;
    }

    @Override // y8.b, com.facebook.datasource.DataSubscriber
    public final void onCancellation(DataSource dataSource) {
        Intrinsics.checkNotNullParameter(dataSource, "dataSource");
        this.a.invoke(null);
    }

    @Override // y8.b
    public final void onFailureImpl(DataSource dataSource) {
        Intrinsics.checkNotNullParameter(dataSource, "dataSource");
        Log.e("ImageLoader", "[RNScreens] Error loading image: " + this.f18957c, dataSource.b());
        this.a.invoke(null);
    }

    @Override // y8.b
    public final void onNewResultImpl(DataSource dataSource) {
        Intrinsics.checkNotNullParameter(dataSource, "dataSource");
        if (!dataSource.isFinished()) {
            return;
        }
        CloseableReference closeableReference = (CloseableReference) dataSource.getResult();
        BitmapDrawable bitmapDrawable = null;
        if (closeableReference == null) {
            this.a.invoke(null);
            return;
        }
        Context context = this.f18956b;
        try {
            Object q5 = closeableReference.q();
            Intrinsics.checkNotNullExpressionValue(q5, "get(...)");
            oa.c cVar = (oa.c) q5;
            if (cVar instanceof oa.d) {
                Bitmap bitmap = ((oa.g) ((oa.d) cVar)).f15806w;
                Intrinsics.checkNotNullExpressionValue(bitmap, "getUnderlyingBitmap(...)");
                if (bitmap != null) {
                    Bitmap.Config config = bitmap.getConfig();
                    if (config == null) {
                        config = Bitmap.Config.ARGB_8888;
                    }
                    Bitmap copy = bitmap.copy(config, false);
                    if (copy != null) {
                        Resources resources = context.getResources();
                        Intrinsics.checkNotNullExpressionValue(resources, "getResources(...)");
                        bitmapDrawable = new BitmapDrawable(resources, copy);
                    }
                }
            }
            closeableReference.close();
            this.a.invoke(bitmapDrawable);
        } finally {
        }
    }
}
