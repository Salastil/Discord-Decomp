package eh;

import android.content.Context;
import android.view.View;
import android.view.animation.PathInterpolator;
import androidx.activity.BackEventCompat;
import com.discord.R;
import com.facebook.react.views.image.ReactImageView;

/* loaded from: classes3.dex */
public abstract class a {
    public final PathInterpolator a = new PathInterpolator(0.1f, 0.1f, 0.0f, 1.0f);

    /* renamed from: b, reason: collision with root package name */
    public final View f8084b;

    /* renamed from: c, reason: collision with root package name */
    public final int f8085c;

    /* renamed from: d, reason: collision with root package name */
    public final int f8086d;

    /* renamed from: e, reason: collision with root package name */
    public final int f8087e;

    /* renamed from: f, reason: collision with root package name */
    public BackEventCompat f8088f;

    public a(View view) {
        this.f8084b = view;
        Context context = view.getContext();
        this.f8085c = ta.a.G(context, R.attr.motionDurationMedium2, ReactImageView.REMOTE_IMAGE_FADE_DURATION_MS);
        this.f8086d = ta.a.G(context, R.attr.motionDurationShort3, 150);
        this.f8087e = ta.a.G(context, R.attr.motionDurationShort2, 100);
    }
}
