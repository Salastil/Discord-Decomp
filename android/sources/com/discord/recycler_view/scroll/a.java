package com.discord.recycler_view.scroll;

import androidx.recyclerview.widget.RecyclerView;
import com.discord.recycler_view.scroll.DebouncedScrollListener;
import com.discord.recycler_view.scroll.DebouncedVelocityTrackingScrollListener;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4348d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ RecyclerView.OnScrollListener f4349e;

    public /* synthetic */ a(RecyclerView.OnScrollListener onScrollListener, int i5) {
        this.f4348d = i5;
        this.f4349e = onScrollListener;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit scrollEvents$lambda$0;
        Unit timeoutMillis$lambda$1;
        Unit velocityEvents$lambda$0;
        switch (this.f4348d) {
            case 0:
                scrollEvents$lambda$0 = DebouncedScrollListener.scrollEvents$lambda$0((DebouncedScrollListener) this.f4349e, (DebouncedScrollListener.ScrollEvent) obj);
                return scrollEvents$lambda$0;
            case 1:
                timeoutMillis$lambda$1 = DebouncedScrollListener.setTimeoutMillis$lambda$1((DebouncedScrollListener) this.f4349e, (DebouncedScrollListener.ScrollEvent) obj);
                return timeoutMillis$lambda$1;
            default:
                velocityEvents$lambda$0 = DebouncedVelocityTrackingScrollListener.velocityEvents$lambda$0((DebouncedVelocityTrackingScrollListener) this.f4349e, (DebouncedVelocityTrackingScrollListener.VelocityEvent) obj);
                return velocityEvents$lambda$0;
        }
    }
}
