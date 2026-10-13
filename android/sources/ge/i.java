package ge;

import android.media.Spatializer;
import android.media.Spatializer$OnSpatializerStateChangedListener;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import fi.q0;

/* loaded from: classes3.dex */
public final class i implements Spatializer$OnSpatializerStateChangedListener {
    public final /* synthetic */ DefaultTrackSelector a;

    public i(DefaultTrackSelector defaultTrackSelector) {
        this.a = defaultTrackSelector;
    }

    public final void onSpatializerAvailableChanged(Spatializer spatializer, boolean z5) {
        q0 q0Var = DefaultTrackSelector.k;
        this.a.e();
    }

    public final void onSpatializerEnabledChanged(Spatializer spatializer, boolean z5) {
        q0 q0Var = DefaultTrackSelector.k;
        this.a.e();
    }
}
