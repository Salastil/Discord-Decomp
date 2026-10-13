package com.discord.chat.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.viewbinding.ViewBinding;
import com.discord.chat.R;
import com.discord.overlapping_circles.OverlappingCirclesView;
import com.facebook.drawee.view.SimpleDraweeView;
import nt.a;

/* loaded from: classes.dex */
public final class CallSystemMessageViewBinding implements ViewBinding {

    @NonNull
    public final SimpleDraweeView icon;

    @NonNull
    public final TextView info;

    @NonNull
    public final TextView message;

    @NonNull
    public final OverlappingCirclesView participants;

    @NonNull
    private final View rootView;

    private CallSystemMessageViewBinding(@NonNull View view, @NonNull SimpleDraweeView simpleDraweeView, @NonNull TextView textView, @NonNull TextView textView2, @NonNull OverlappingCirclesView overlappingCirclesView) {
        this.rootView = view;
        this.icon = simpleDraweeView;
        this.info = textView;
        this.message = textView2;
        this.participants = overlappingCirclesView;
    }

    @NonNull
    public static CallSystemMessageViewBinding bind(@NonNull View view) {
        int i5 = R.id.icon;
        SimpleDraweeView simpleDraweeView = (SimpleDraweeView) a.p(i5, view);
        if (simpleDraweeView != null) {
            i5 = R.id.info;
            TextView textView = (TextView) a.p(i5, view);
            if (textView != null) {
                i5 = R.id.message;
                TextView textView2 = (TextView) a.p(i5, view);
                if (textView2 != null) {
                    i5 = R.id.participants;
                    OverlappingCirclesView overlappingCirclesView = (OverlappingCirclesView) a.p(i5, view);
                    if (overlappingCirclesView != null) {
                        return new CallSystemMessageViewBinding(view, simpleDraweeView, textView, textView2, overlappingCirclesView);
                    }
                }
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i5)));
    }

    @NonNull
    public static CallSystemMessageViewBinding inflate(@NonNull LayoutInflater layoutInflater, @NonNull ViewGroup viewGroup) {
        if (viewGroup == null) {
            throw new NullPointerException("parent");
        }
        layoutInflater.inflate(R.layout.call_system_message_view, viewGroup);
        return bind(viewGroup);
    }

    @Override // androidx.viewbinding.ViewBinding
    @NonNull
    public View getRoot() {
        return this.rootView;
    }
}
