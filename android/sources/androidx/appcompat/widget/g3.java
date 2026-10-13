package androidx.appcompat.widget;

import android.R;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;

/* loaded from: classes.dex */
public final class g3 {
    public final TextView a;

    /* renamed from: b, reason: collision with root package name */
    public final TextView f998b;

    /* renamed from: c, reason: collision with root package name */
    public final ImageView f999c;

    /* renamed from: d, reason: collision with root package name */
    public final ImageView f1000d;

    /* renamed from: e, reason: collision with root package name */
    public final ImageView f1001e;

    public g3(View view) {
        this.a = (TextView) view.findViewById(R.id.text1);
        this.f998b = (TextView) view.findViewById(R.id.text2);
        this.f999c = (ImageView) view.findViewById(R.id.icon1);
        this.f1000d = (ImageView) view.findViewById(R.id.icon2);
        this.f1001e = (ImageView) view.findViewById(com.discord.R.id.edit_query);
    }
}
