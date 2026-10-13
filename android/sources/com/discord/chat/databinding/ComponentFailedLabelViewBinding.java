package com.discord.chat.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.viewbinding.ViewBinding;
import com.discord.chat.R;
import com.facebook.drawee.view.SimpleDraweeView;
import nt.a;

/* loaded from: classes.dex */
public final class ComponentFailedLabelViewBinding implements ViewBinding {

    @NonNull
    private final ConstraintLayout rootView;

    @NonNull
    public final SimpleDraweeView viewInteractionFailedLabelIcon;

    @NonNull
    public final TextView viewInteractionFailedLabelMessage;

    private ComponentFailedLabelViewBinding(@NonNull ConstraintLayout constraintLayout, @NonNull SimpleDraweeView simpleDraweeView, @NonNull TextView textView) {
        this.rootView = constraintLayout;
        this.viewInteractionFailedLabelIcon = simpleDraweeView;
        this.viewInteractionFailedLabelMessage = textView;
    }

    @NonNull
    public static ComponentFailedLabelViewBinding bind(@NonNull View view) {
        int i5 = R.id.view_interaction_failed_label_icon;
        SimpleDraweeView simpleDraweeView = (SimpleDraweeView) a.p(i5, view);
        if (simpleDraweeView != null) {
            i5 = R.id.view_interaction_failed_label_message;
            TextView textView = (TextView) a.p(i5, view);
            if (textView != null) {
                return new ComponentFailedLabelViewBinding((ConstraintLayout) view, simpleDraweeView, textView);
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i5)));
    }

    @NonNull
    public static ComponentFailedLabelViewBinding inflate(@NonNull LayoutInflater layoutInflater) {
        return inflate(layoutInflater, null, false);
    }

    @NonNull
    public static ComponentFailedLabelViewBinding inflate(@NonNull LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z5) {
        View inflate = layoutInflater.inflate(R.layout.component_failed_label_view, viewGroup, false);
        if (z5) {
            viewGroup.addView(inflate);
        }
        return bind(inflate);
    }

    @Override // androidx.viewbinding.ViewBinding
    @NonNull
    public ConstraintLayout getRoot() {
        return this.rootView;
    }
}
