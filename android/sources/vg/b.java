package vg;

import android.graphics.Canvas;
import android.graphics.Paint;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.R;
import com.google.android.material.carousel.CarouselLayoutManager;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

/* loaded from: classes3.dex */
public final class b extends RecyclerView.ItemDecoration {
    public final Paint a;

    /* renamed from: b, reason: collision with root package name */
    public final List f19411b;

    public b() {
        Paint paint = new Paint();
        this.a = paint;
        this.f19411b = Collections.unmodifiableList(new ArrayList());
        paint.setStrokeWidth(5.0f);
        paint.setColor(-65281);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.ItemDecoration
    public final void onDrawOver(Canvas canvas, RecyclerView recyclerView, RecyclerView.State state) {
        Canvas canvas2;
        super.onDrawOver(canvas, recyclerView, state);
        float dimension = recyclerView.getResources().getDimension(R.dimen.m3_carousel_debug_keyline_width);
        Paint paint = this.a;
        paint.setStrokeWidth(dimension);
        Iterator it = this.f19411b.iterator();
        while (it.hasNext()) {
            ((g) it.next()).getClass();
            paint.setColor(b1.c.b(-65281, -16776961, 0.0f));
            if (((CarouselLayoutManager) recyclerView.getLayoutManager()).e()) {
                canvas2 = canvas;
                canvas2.drawLine(0.0f, ((CarouselLayoutManager) recyclerView.getLayoutManager()).f6001e.e(), 0.0f, ((CarouselLayoutManager) recyclerView.getLayoutManager()).f6001e.a(), paint);
            } else {
                canvas2 = canvas;
                canvas2.drawLine(((CarouselLayoutManager) recyclerView.getLayoutManager()).f6001e.b(), 0.0f, ((CarouselLayoutManager) recyclerView.getLayoutManager()).f6001e.c(), 0.0f, paint);
            }
            canvas = canvas2;
        }
    }
}
