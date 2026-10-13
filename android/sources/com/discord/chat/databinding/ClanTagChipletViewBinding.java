package com.discord.chat.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.viewbinding.ViewBinding;
import com.discord.chat.R;
import com.facebook.drawee.view.SimpleDraweeView;
import nt.a;

/* loaded from: classes.dex */
public final class ClanTagChipletViewBinding implements ViewBinding {

    @NonNull
    public final SimpleDraweeView badge;

    @NonNull
    public final LinearLayout container;

    @NonNull
    private final View rootView;

    @NonNull
    public final TextView tag;

    private ClanTagChipletViewBinding(@NonNull View view, @NonNull SimpleDraweeView simpleDraweeView, @NonNull LinearLayout linearLayout, @NonNull TextView textView) {
        this.rootView = view;
        this.badge = simpleDraweeView;
        this.container = linearLayout;
        this.tag = textView;
    }

    @NonNull
    public static ClanTagChipletViewBinding bind(@NonNull View view) {
        int i5 = R.id.badge;
        SimpleDraweeView simpleDraweeView = (SimpleDraweeView) a.p(i5, view);
        if (simpleDraweeView != null) {
            i5 = R.id.container;
            LinearLayout linearLayout = (LinearLayout) a.p(i5, view);
            if (linearLayout != null) {
                i5 = R.id.tag;
                TextView textView = (TextView) a.p(i5, view);
                if (textView != null) {
                    return new ClanTagChipletViewBinding(view, simpleDraweeView, linearLayout, textView);
                }
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i5)));
    }

    @NonNull
    public static ClanTagChipletViewBinding inflate(@NonNull LayoutInflater layoutInflater, @NonNull ViewGroup viewGroup) {
        if (viewGroup == null) {
            throw new NullPointerException("parent");
        }
        layoutInflater.inflate(R.layout.clan_tag_chiplet_view, viewGroup);
        return bind(viewGroup);
    }

    @Override // androidx.viewbinding.ViewBinding
    @NonNull
    public View getRoot() {
        return this.rootView;
    }
}
