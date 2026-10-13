package com.discord.chat.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.constraintlayout.widget.Barrier;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.viewbinding.ViewBinding;
import com.discord.chat.R;
import com.discord.chat.presentation.message.view.BlockedApplicationEmbedView;
import com.discord.core.DCDButton;
import com.discord.overlapping_circles.OverlappingCirclesView;
import com.facebook.drawee.view.SimpleDraweeView;
import nt.a;

/* loaded from: classes.dex */
public final class AppMessageEmbedViewBinding implements ViewBinding {

    @NonNull
    public final LinearLayout actionsContainer;

    @NonNull
    public final SimpleDraweeView appIcon;

    @NonNull
    public final SimpleDraweeView banner;

    @NonNull
    public final Barrier barrierFooter;

    @NonNull
    public final BlockedApplicationEmbedView blockedView;

    @NonNull
    public final TextView header;

    @NonNull
    public final TextView info;

    @NonNull
    public final ConstraintLayout itemBottomContainer;

    @NonNull
    public final DCDButton linkIcon;

    @NonNull
    public final DCDButton linkIconTitle;

    @NonNull
    public final ConstraintLayout normalContainer;

    @NonNull
    public final OverlappingCirclesView participants;

    @NonNull
    public final TextView participantsText;

    @NonNull
    public final SimpleDraweeView playerIcon;

    @NonNull
    private final View rootView;

    @NonNull
    public final TextView tagline;

    @NonNull
    public final TextView title;

    private AppMessageEmbedViewBinding(@NonNull View view, @NonNull LinearLayout linearLayout, @NonNull SimpleDraweeView simpleDraweeView, @NonNull SimpleDraweeView simpleDraweeView2, @NonNull Barrier barrier, @NonNull BlockedApplicationEmbedView blockedApplicationEmbedView, @NonNull TextView textView, @NonNull TextView textView2, @NonNull ConstraintLayout constraintLayout, @NonNull DCDButton dCDButton, @NonNull DCDButton dCDButton2, @NonNull ConstraintLayout constraintLayout2, @NonNull OverlappingCirclesView overlappingCirclesView, @NonNull TextView textView3, @NonNull SimpleDraweeView simpleDraweeView3, @NonNull TextView textView4, @NonNull TextView textView5) {
        this.rootView = view;
        this.actionsContainer = linearLayout;
        this.appIcon = simpleDraweeView;
        this.banner = simpleDraweeView2;
        this.barrierFooter = barrier;
        this.blockedView = blockedApplicationEmbedView;
        this.header = textView;
        this.info = textView2;
        this.itemBottomContainer = constraintLayout;
        this.linkIcon = dCDButton;
        this.linkIconTitle = dCDButton2;
        this.normalContainer = constraintLayout2;
        this.participants = overlappingCirclesView;
        this.participantsText = textView3;
        this.playerIcon = simpleDraweeView3;
        this.tagline = textView4;
        this.title = textView5;
    }

    @NonNull
    public static AppMessageEmbedViewBinding bind(@NonNull View view) {
        int i5 = R.id.actions_container;
        LinearLayout linearLayout = (LinearLayout) a.p(i5, view);
        if (linearLayout != null) {
            i5 = R.id.app_icon;
            SimpleDraweeView simpleDraweeView = (SimpleDraweeView) a.p(i5, view);
            if (simpleDraweeView != null) {
                i5 = R.id.banner;
                SimpleDraweeView simpleDraweeView2 = (SimpleDraweeView) a.p(i5, view);
                if (simpleDraweeView2 != null) {
                    i5 = R.id.barrier_footer;
                    Barrier barrier = (Barrier) a.p(i5, view);
                    if (barrier != null) {
                        i5 = R.id.blocked_view;
                        BlockedApplicationEmbedView blockedApplicationEmbedView = (BlockedApplicationEmbedView) a.p(i5, view);
                        if (blockedApplicationEmbedView != null) {
                            i5 = R.id.header;
                            TextView textView = (TextView) a.p(i5, view);
                            if (textView != null) {
                                i5 = R.id.info;
                                TextView textView2 = (TextView) a.p(i5, view);
                                if (textView2 != null) {
                                    i5 = R.id.item_bottom_container;
                                    ConstraintLayout constraintLayout = (ConstraintLayout) a.p(i5, view);
                                    if (constraintLayout != null) {
                                        i5 = R.id.link_icon;
                                        DCDButton dCDButton = (DCDButton) a.p(i5, view);
                                        if (dCDButton != null) {
                                            i5 = R.id.link_icon_title;
                                            DCDButton dCDButton2 = (DCDButton) a.p(i5, view);
                                            if (dCDButton2 != null) {
                                                i5 = R.id.normal_container;
                                                ConstraintLayout constraintLayout2 = (ConstraintLayout) a.p(i5, view);
                                                if (constraintLayout2 != null) {
                                                    i5 = R.id.participants;
                                                    OverlappingCirclesView overlappingCirclesView = (OverlappingCirclesView) a.p(i5, view);
                                                    if (overlappingCirclesView != null) {
                                                        i5 = R.id.participants_text;
                                                        TextView textView3 = (TextView) a.p(i5, view);
                                                        if (textView3 != null) {
                                                            i5 = R.id.player_icon;
                                                            SimpleDraweeView simpleDraweeView3 = (SimpleDraweeView) a.p(i5, view);
                                                            if (simpleDraweeView3 != null) {
                                                                i5 = R.id.tagline;
                                                                TextView textView4 = (TextView) a.p(i5, view);
                                                                if (textView4 != null) {
                                                                    i5 = R.id.title;
                                                                    TextView textView5 = (TextView) a.p(i5, view);
                                                                    if (textView5 != null) {
                                                                        return new AppMessageEmbedViewBinding(view, linearLayout, simpleDraweeView, simpleDraweeView2, barrier, blockedApplicationEmbedView, textView, textView2, constraintLayout, dCDButton, dCDButton2, constraintLayout2, overlappingCirclesView, textView3, simpleDraweeView3, textView4, textView5);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i5)));
    }

    @NonNull
    public static AppMessageEmbedViewBinding inflate(@NonNull LayoutInflater layoutInflater, @NonNull ViewGroup viewGroup) {
        if (viewGroup == null) {
            throw new NullPointerException("parent");
        }
        layoutInflater.inflate(R.layout.app_message_embed_view, viewGroup);
        return bind(viewGroup);
    }

    @Override // androidx.viewbinding.ViewBinding
    @NonNull
    public View getRoot() {
        return this.rootView;
    }
}
