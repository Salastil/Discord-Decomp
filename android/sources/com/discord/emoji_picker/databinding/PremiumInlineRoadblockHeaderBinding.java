package com.discord.emoji_picker.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import androidx.annotation.NonNull;
import androidx.viewbinding.ViewBinding;
import com.discord.emoji_picker.R;
import nt.a;

/* loaded from: classes.dex */
public final class PremiumInlineRoadblockHeaderBinding implements ViewBinding {

    @NonNull
    public final View gradient;

    @NonNull
    public final View gradientDivider;

    @NonNull
    public final FrameLayout gradientIcon;

    @NonNull
    public final LinearLayout gradients;

    @NonNull
    private final RelativeLayout rootView;

    private PremiumInlineRoadblockHeaderBinding(@NonNull RelativeLayout relativeLayout, @NonNull View view, @NonNull View view2, @NonNull FrameLayout frameLayout, @NonNull LinearLayout linearLayout) {
        this.rootView = relativeLayout;
        this.gradient = view;
        this.gradientDivider = view2;
        this.gradientIcon = frameLayout;
        this.gradients = linearLayout;
    }

    @NonNull
    public static PremiumInlineRoadblockHeaderBinding bind(@NonNull View view) {
        View p3;
        int i5 = R.id.gradient;
        View p5 = a.p(i5, view);
        if (p5 != null && (p3 = a.p((i5 = R.id.gradient_divider), view)) != null) {
            i5 = R.id.gradient_icon;
            FrameLayout frameLayout = (FrameLayout) a.p(i5, view);
            if (frameLayout != null) {
                i5 = R.id.gradients;
                LinearLayout linearLayout = (LinearLayout) a.p(i5, view);
                if (linearLayout != null) {
                    return new PremiumInlineRoadblockHeaderBinding((RelativeLayout) view, p5, p3, frameLayout, linearLayout);
                }
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i5)));
    }

    @NonNull
    public static PremiumInlineRoadblockHeaderBinding inflate(@NonNull LayoutInflater layoutInflater) {
        return inflate(layoutInflater, null, false);
    }

    @NonNull
    public static PremiumInlineRoadblockHeaderBinding inflate(@NonNull LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z5) {
        View inflate = layoutInflater.inflate(R.layout.premium_inline_roadblock_header, viewGroup, false);
        if (z5) {
            viewGroup.addView(inflate);
        }
        return bind(inflate);
    }

    @Override // androidx.viewbinding.ViewBinding
    @NonNull
    public RelativeLayout getRoot() {
        return this.rootView;
    }
}
