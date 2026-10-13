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
public final class VoiceChannelListInviteUserItemBinding implements ViewBinding {

    @NonNull
    public final TextView liveBadge;

    @NonNull
    private final LinearLayout rootView;

    @NonNull
    public final SimpleDraweeView userAvatar;

    @NonNull
    public final TextView userName;

    private VoiceChannelListInviteUserItemBinding(@NonNull LinearLayout linearLayout, @NonNull TextView textView, @NonNull SimpleDraweeView simpleDraweeView, @NonNull TextView textView2) {
        this.rootView = linearLayout;
        this.liveBadge = textView;
        this.userAvatar = simpleDraweeView;
        this.userName = textView2;
    }

    @NonNull
    public static VoiceChannelListInviteUserItemBinding bind(@NonNull View view) {
        int i5 = R.id.live_badge;
        TextView textView = (TextView) a.p(i5, view);
        if (textView != null) {
            i5 = R.id.user_avatar;
            SimpleDraweeView simpleDraweeView = (SimpleDraweeView) a.p(i5, view);
            if (simpleDraweeView != null) {
                i5 = R.id.user_name;
                TextView textView2 = (TextView) a.p(i5, view);
                if (textView2 != null) {
                    return new VoiceChannelListInviteUserItemBinding((LinearLayout) view, textView, simpleDraweeView, textView2);
                }
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i5)));
    }

    @NonNull
    public static VoiceChannelListInviteUserItemBinding inflate(@NonNull LayoutInflater layoutInflater) {
        return inflate(layoutInflater, null, false);
    }

    @NonNull
    public static VoiceChannelListInviteUserItemBinding inflate(@NonNull LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z5) {
        View inflate = layoutInflater.inflate(R.layout.voice_channel_list_invite_user_item, viewGroup, false);
        if (z5) {
            viewGroup.addView(inflate);
        }
        return bind(inflate);
    }

    @Override // androidx.viewbinding.ViewBinding
    @NonNull
    public LinearLayout getRoot() {
        return this.rootView;
    }
}
