package com.discord.chat.presentation.message.view.botuikit.components.checkpoint;

import android.annotation.SuppressLint;
import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.Color;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import bs.c0;
import com.discord.chat.R;
import com.discord.chat.bridge.botuikit.CheckpointApplication;
import com.discord.chat.bridge.botuikit.CheckpointCardComponent;
import com.discord.chat.bridge.botuikit.CheckpointData;
import com.discord.chat.bridge.botuikit.CheckpointDataV2025;
import com.discord.chat.bridge.botuikit.CheckpointEmoji;
import com.discord.chat.bridge.botuikit.CheckpointGuild;
import com.discord.chat.bridge.botuikit.CheckpointVersion;
import com.discord.chat.databinding.MessageComponentCheckpointCardV2025ViewBinding;
import com.discord.chat.presentation.message.view.botuikit.ComponentContext;
import com.discord.chat.presentation.message.view.botuikit.ComponentProvider;
import com.discord.chat.presentation.message.view.botuikit.ComponentView;
import com.discord.chat.presentation.message.view.botuikit.VersionedComponentView;
import com.discord.fonts.DiscordFont;
import com.discord.fonts.DiscordFontUtilsKt;
import com.discord.icons.IconUrlUtils;
import com.discord.image.fresco.SetImageUriWithCachePolicyKt;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.misc.utilities.view.ViewBackgroundUtilsKt;
import com.discord.primitives.ApplicationId;
import com.discord.primitives.GuildId;
import com.discord.react_strings.I18nMessage;
import com.discord.react_strings.I18nUtilsKt;
import com.discord.theme.ThemeManagerKt;
import com.discord.theme.utils.ColorUtilsKt;
import com.facebook.drawee.view.SimpleDraweeView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import fo.l;
import fo.m;
import java.util.Locale;
import java.util.Map;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.v0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.reflect.KClass;
import org.jetbrains.annotations.NotNull;
import s4.h;

@Metadata(d1 = {"\u0000\u0094\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010$\n\u0002\b\u000b\n\u0002\u0010\u0011\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u0000 B2\u00020\u00012\b\u0012\u0004\u0012\u00020\u00030\u00022\u00020\u0004:\u0001BB'\b\u0007\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\b\u0012\b\b\u0002\u0010\t\u001a\u00020\n¢\u0006\u0004\b\u000b\u0010\fJ\u000e\u0010&\u001a\b\u0012\u0004\u0012\u00020\u00030'H\u0016J \u0010(\u001a\u00020)2\u0006\u0010*\u001a\u00020\u00032\u0006\u0010+\u001a\u00020,2\u0006\u0010-\u001a\u00020.H\u0016J\u0018\u0010/\u001a\u00020)2\u0006\u00100\u001a\u0002012\u0006\u00102\u001a\u00020\nH\u0003J\u0018\u00103\u001a\u00020)2\u0006\u0010-\u001a\u00020.2\u0006\u00100\u001a\u000201H\u0003J\u0012\u00104\u001a\u00020)2\b\u00105\u001a\u0004\u0018\u000106H\u0002J\u0012\u00107\u001a\u00020)2\b\u00108\u001a\u0004\u0018\u000109H\u0002J\u0012\u0010:\u001a\u00020)2\b\u0010;\u001a\u0004\u0018\u00010<H\u0002J\u0018\u0010=\u001a\u00020)2\u0006\u0010>\u001a\u00020?2\u0006\u0010@\u001a\u00020AH\u0002R\u0014\u0010\r\u001a\u00020\u000eX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u001a\u0010\u0011\u001a\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\n0\u0012X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u0011\u0010\u0014\u001a\u00020\n¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016R\u0011\u0010\u0017\u001a\u00020\n¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0016R\u0011\u0010\u0019\u001a\u00020\n¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u0016R\u0011\u0010\u001b\u001a\u00020\n¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u0016R\u0018\u0010\u001d\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\n0\u001eX\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u001fR\u001b\u0010 \u001a\u00020!8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b$\u0010%\u001a\u0004\b\"\u0010#¨\u0006C"}, d2 = {"Lcom/discord/chat/presentation/message/view/botuikit/components/checkpoint/CheckpointCardV2025ComponentView;", "Landroidx/constraintlayout/widget/ConstraintLayout;", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentView;", "Lcom/discord/chat/bridge/botuikit/CheckpointCardComponent;", "Lcom/discord/chat/presentation/message/view/botuikit/VersionedComponentView;", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "defStyleAttr", "", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V", "version", "", "getVersion", "()Ljava/lang/String;", "cardColorMap", "", "cardDefaultColor", "secondaryColor", "getSecondaryColor", "()I", "black", "getBlack", "transparent", "getTransparent", "barUnfilledColor", "getBarUnfilledColor", "barIds", "", "[Ljava/lang/Integer;", "binding", "Lcom/discord/chat/databinding/MessageComponentCheckpointCardV2025ViewBinding;", "getBinding", "()Lcom/discord/chat/databinding/MessageComponentCheckpointCardV2025ViewBinding;", "binding$delegate", "Lkotlin/Lazy;", "getComponentType", "Lkotlin/reflect/KClass;", "configure", "", "component", "componentProvider", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentProvider;", "componentContext", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentContext;", "configurePowerBar", "checkpointData", "Lcom/discord/chat/bridge/botuikit/CheckpointDataV2025;", "cardColor", "configureFooter", "configureEmoji", "topEmoji", "Lcom/discord/chat/bridge/botuikit/CheckpointEmoji;", "configureApplication", "topGame", "Lcom/discord/chat/bridge/botuikit/CheckpointApplication;", "configureGuild", "topGuild", "Lcom/discord/chat/bridge/botuikit/CheckpointGuild;", "adjustImageLayout", "isImageVisible", "", "view", "Lcom/facebook/drawee/view/SimpleDraweeView;", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nCheckpointCardV2025ComponentView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 CheckpointCardV2025ComponentView.kt\ncom/discord/chat/presentation/message/view/botuikit/components/checkpoint/CheckpointCardV2025ComponentView\n+ 2 Color.kt\nandroidx/core/graphics/ColorKt\n+ 3 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n*L\n1#1,361:1\n404#2:362\n404#2:363\n404#2:364\n404#2:365\n404#2:366\n404#2:367\n404#2:368\n404#2:369\n404#2:370\n404#2:371\n404#2:372\n404#2:373\n404#2:374\n404#2:375\n404#2:376\n404#2:377\n404#2:378\n13472#3,2:379\n*S KotlinDebug\n*F\n+ 1 CheckpointCardV2025ComponentView.kt\ncom/discord/chat/presentation/message/view/botuikit/components/checkpoint/CheckpointCardV2025ComponentView\n*L\n53#1:362\n54#1:363\n55#1:364\n56#1:365\n57#1:366\n58#1:367\n59#1:368\n60#1:369\n61#1:370\n62#1:371\n65#1:372\n66#1:373\n67#1:374\n68#1:375\n233#1:376\n275#1:377\n308#1:378\n76#1:379,2\n*E\n"})
/* loaded from: classes.dex */
public final class CheckpointCardV2025ComponentView extends ConstraintLayout implements ComponentView<CheckpointCardComponent>, VersionedComponentView {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final Integer[] barIds;
    private final int barUnfilledColor;

    /* renamed from: binding$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy binding;
    private final int black;

    @NotNull
    private final Map<String, Integer> cardColorMap;
    private final int cardDefaultColor;
    private final int secondaryColor;
    private final int transparent;

    @NotNull
    private final String version;

    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t¨\u0006\n"}, d2 = {"Lcom/discord/chat/presentation/message/view/botuikit/components/checkpoint/CheckpointCardV2025ComponentView$Companion;", "", "<init>", "()V", "inflateComponent", "Lcom/discord/chat/presentation/message/view/botuikit/components/checkpoint/CheckpointCardV2025ComponentView;", "context", "Landroid/content/Context;", "root", "Landroid/view/ViewGroup;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        public final CheckpointCardV2025ComponentView inflateComponent(@NotNull Context context, @NotNull ViewGroup root) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(root, "root");
            CheckpointCardV2025ComponentView root2 = MessageComponentCheckpointCardV2025ViewBinding.inflate(LayoutInflater.from(context), root, false).getRoot();
            Intrinsics.checkNotNullExpressionValue(root2, "getRoot(...)");
            return root2;
        }

        private Companion() {
        }
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public CheckpointCardV2025ComponentView(@NotNull Context context) {
        this(context, null, 0, 6, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    private final void adjustImageLayout(boolean isImageVisible, SimpleDraweeView view) {
        if (isImageVisible) {
            int i5 = this.black;
            ViewBackgroundUtilsKt.setBackgroundRectangle(view, i5, 0, Integer.valueOf(i5), SizeUtilsKt.getDpToPx(2));
            view.getLayoutParams().width = SizeUtilsKt.getDpToPx(14);
            view.getLayoutParams().height = SizeUtilsKt.getDpToPx(14);
            return;
        }
        int i6 = this.transparent;
        ViewBackgroundUtilsKt.setBackgroundRectangle(view, i6, 0, Integer.valueOf(i6), 0);
        view.getLayoutParams().width = SizeUtilsKt.getDpToPx(16);
        view.getLayoutParams().height = SizeUtilsKt.getDpToPx(16);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final MessageComponentCheckpointCardV2025ViewBinding binding_delegate$lambda$6(CheckpointCardV2025ComponentView checkpointCardV2025ComponentView, Context context) {
        MessageComponentCheckpointCardV2025ViewBinding bind = MessageComponentCheckpointCardV2025ViewBinding.bind(checkpointCardV2025ComponentView);
        TextView[] textViewArr = {bind.messageCount, bind.voiceMinutes, bind.emojiCount, bind.emojiName, bind.applicationName, bind.guildName};
        for (int i5 = 0; i5 < 6; i5++) {
            TextView textView = textViewArr[i5];
            Intrinsics.checkNotNull(textView);
            DiscordFontUtilsKt.setDiscordFont(textView, DiscordFont.PrimaryMedium);
        }
        TextView title = bind.title;
        Intrinsics.checkNotNullExpressionValue(title, "title");
        DiscordFontUtilsKt.setDiscordFont(title, DiscordFont.DisplayExtraBold);
        TextView cta = bind.cta;
        Intrinsics.checkNotNullExpressionValue(cta, "cta");
        DiscordFontUtilsKt.setDiscordFont(cta, DiscordFont.PrimaryBold);
        TextView powerLevelNumber = bind.powerLevelNumber;
        Intrinsics.checkNotNullExpressionValue(powerLevelNumber, "powerLevelNumber");
        DiscordFontUtilsKt.setDiscordFont(powerLevelNumber, DiscordFont.CodeBold);
        ImageView imageView = new ImageView(context);
        imageView.setId(View.generateViewId());
        checkpointCardV2025ComponentView.barIds[0] = Integer.valueOf(imageView.getId());
        imageView.setImageResource(R.drawable.checkpoint_power_start);
        ConstraintLayout.LayoutParams layoutParams = new ConstraintLayout.LayoutParams(SizeUtilsKt.getDpToPx(4), SizeUtilsKt.getDpToPx(6));
        layoutParams.setMarginStart(SizeUtilsKt.getDpToPx(2));
        imageView.setLayoutParams(layoutParams);
        ImageView imageView2 = new ImageView(context);
        imageView2.setId(View.generateViewId());
        checkpointCardV2025ComponentView.barIds[9] = Integer.valueOf(imageView2.getId());
        imageView2.setImageResource(R.drawable.checkpoint_power_end);
        ConstraintLayout.LayoutParams layoutParams2 = new ConstraintLayout.LayoutParams(SizeUtilsKt.getDpToPx(4), SizeUtilsKt.getDpToPx(6));
        layoutParams2.setMarginStart(SizeUtilsKt.getDpToPx(2));
        imageView2.setLayoutParams(layoutParams2);
        LinearLayout linearLayout = bind.powerBar;
        linearLayout.addView(imageView);
        for (int i6 = 1; i6 < 9; i6++) {
            ImageView imageView3 = new ImageView(context);
            imageView3.setId(View.generateViewId());
            checkpointCardV2025ComponentView.barIds[i6] = Integer.valueOf(imageView3.getId());
            imageView3.setImageResource(R.drawable.checkpoint_power_mid);
            ConstraintLayout.LayoutParams layoutParams3 = new ConstraintLayout.LayoutParams(SizeUtilsKt.getDpToPx(4), SizeUtilsKt.getDpToPx(6));
            layoutParams3.setMarginStart(SizeUtilsKt.getDpToPx(2));
            imageView3.setLayoutParams(layoutParams3);
            linearLayout.addView(imageView3);
        }
        linearLayout.addView(imageView2);
        return bind;
    }

    private final void configureApplication(CheckpointApplication topGame) {
        CharSequence i18nFormat$default;
        TextView textView = getBinding().applicationName;
        String str = null;
        if (topGame == null || (i18nFormat$default = topGame.getApplicationName()) == null) {
            Context context = getContext();
            Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
            i18nFormat$default = I18nUtilsKt.i18nFormat$default(context, I18nMessage.NO_GAMES, null, 2, null);
        }
        textView.setText(i18nFormat$default);
        if ((topGame != null ? ApplicationId.m1150boximpl(topGame.m298getApplicationIdVavddsQ()) : null) != null && topGame.getApplicationImageId() != null) {
            str = IconUrlUtils.m994getApplicationIconweIltyw$default(IconUrlUtils.INSTANCE, ApplicationId.m1150boximpl(topGame.m298getApplicationIdVavddsQ()), topGame.getApplicationImageId(), 0, 4, null);
        }
        boolean z5 = str != null;
        SimpleDraweeView simpleDraweeView = getBinding().applicationImage;
        if (z5) {
            Intrinsics.checkNotNull(simpleDraweeView);
            SetImageUriWithCachePolicyKt.setImageUriWithCachePolicy(simpleDraweeView, str);
            simpleDraweeView.clearColorFilter();
        } else {
            simpleDraweeView.setImageResource(R.drawable.ic_unknown_game_icon_16dp);
            Intrinsics.checkNotNull(simpleDraweeView);
            ColorUtilsKt.setTintColor(simpleDraweeView, Integer.valueOf(this.black));
        }
        adjustImageLayout(z5, simpleDraweeView);
        FrameLayout frameLayout = getBinding().applicationStroke;
        if (topGame == null || !z5) {
            frameLayout.setBackgroundColor(Color.parseColor("#00000000"));
            frameLayout.setPadding(0, 0, 0, 0);
        } else {
            frameLayout.setBackgroundColor(this.black);
            frameLayout.setPadding(SizeUtilsKt.getDpToPx(1), SizeUtilsKt.getDpToPx(1), 0, 0);
        }
    }

    private final void configureEmoji(CheckpointEmoji topEmoji) {
        CharSequence i18nFormat$default;
        TextView textView = getBinding().emojiName;
        if ((topEmoji != null ? topEmoji.getEmojiSurrogateName() : null) != null) {
            i18nFormat$default = topEmoji.getEmojiSurrogateName();
        } else {
            if ((topEmoji != null ? topEmoji.getEmojiName() : null) != null) {
                i18nFormat$default = h.f(":", topEmoji.getEmojiName(), ":");
            } else {
                Context context = getContext();
                Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
                i18nFormat$default = I18nUtilsKt.i18nFormat$default(context, I18nMessage.NO_EMOJI_TITLE, null, 2, null);
            }
        }
        textView.setText(i18nFormat$default);
        String customEmojiUrl$default = (topEmoji != null ? topEmoji.getEmojiId() : null) != null ? IconUrlUtils.getCustomEmojiUrl$default(IconUrlUtils.INSTANCE, topEmoji.getEmojiId().longValue(), false, null, 4, null) : null;
        boolean z5 = (topEmoji != null ? topEmoji.getEmojiSurrogateName() : null) != null;
        SimpleDraweeView simpleDraweeView = getBinding().emojiImage;
        simpleDraweeView.setVisibility(z5 ? 8 : 0);
        if (customEmojiUrl$default != null) {
            Intrinsics.checkNotNull(simpleDraweeView);
            SetImageUriWithCachePolicyKt.setImageUriWithCachePolicy(simpleDraweeView, customEmojiUrl$default);
            simpleDraweeView.clearColorFilter();
        } else if (!z5) {
            simpleDraweeView.setImageResource(R.drawable.ic_unknown_game_icon_16dp);
            Intrinsics.checkNotNull(simpleDraweeView);
            ColorUtilsKt.setTintColor(simpleDraweeView, Integer.valueOf(this.black));
        }
        boolean z6 = customEmojiUrl$default != null;
        Intrinsics.checkNotNull(simpleDraweeView);
        adjustImageLayout(z6, simpleDraweeView);
        FrameLayout frameLayout = getBinding().emojiStroke;
        frameLayout.setVisibility(z5 ? 8 : 0);
        if (topEmoji == null || (customEmojiUrl$default == null && !z5)) {
            frameLayout.setBackgroundColor(Color.parseColor("#00000000"));
            frameLayout.setPadding(0, 0, 0, 0);
        } else if (customEmojiUrl$default != null && !z5) {
            frameLayout.setBackgroundColor(this.black);
            frameLayout.setPadding(SizeUtilsKt.getDpToPx(1), SizeUtilsKt.getDpToPx(1), 0, 0);
        }
        TextView textView2 = getBinding().unicodeEmojiImage;
        textView2.setVisibility(z5 ? 0 : 8);
        textView2.setText(topEmoji != null ? topEmoji.getEmojiName() : null);
        Intrinsics.checkNotNull(textView2);
        int i5 = this.black;
        ViewBackgroundUtilsKt.setBackgroundRectangle(textView2, i5, 0, Integer.valueOf(i5), SizeUtilsKt.getDpToPx(2));
    }

    @SuppressLint({"SetTextI18n"})
    private final void configureFooter(ComponentContext componentContext, CheckpointDataV2025 checkpointData) {
        ConstraintLayout constraintLayout = getBinding().footer;
        Intrinsics.checkNotNull(constraintLayout);
        ViewBackgroundUtilsKt.setBackgroundRectangle$default(constraintLayout, this.secondaryColor, 0.0f, 0.0f, 0.0f, 0.0f, null, 0, 126, null);
        CheckpointCardV2025ComponentViewKt.applyClickable(constraintLayout, componentContext, checkpointData, checkpointData.getClickable());
        TextView textView = getBinding().cta;
        textView.setVisibility(checkpointData.getClickable() != null ? 0 : 4);
        Context context = textView.getContext();
        Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
        String upperCase = I18nUtilsKt.i18nFormat$default(context, I18nMessage.START, null, 2, null).toString().toUpperCase(Locale.ROOT);
        Intrinsics.checkNotNullExpressionValue(upperCase, "toUpperCase(...)");
        textView.setText(upperCase);
        getBinding().title.setText("CHECKPOINT");
    }

    private final void configureGuild(CheckpointGuild topGuild) {
        CharSequence i18nFormat$default;
        TextView textView = getBinding().guildName;
        if (topGuild == null || (i18nFormat$default = topGuild.getGuildName()) == null) {
            Context context = getContext();
            Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
            i18nFormat$default = I18nUtilsKt.i18nFormat$default(context, I18nMessage.NO_GUILDS, null, 2, null);
        }
        textView.setText(i18nFormat$default);
        String m996getForGuild14CJxO4$default = ((topGuild != null ? GuildId.m1176boximpl(topGuild.m306getGuildIdfYKD8eg()) : null) == null || topGuild.getGuildIcon() == null) ? null : IconUrlUtils.m996getForGuild14CJxO4$default(IconUrlUtils.INSTANCE, GuildId.m1176boximpl(topGuild.m306getGuildIdfYKD8eg()), topGuild.getGuildIcon(), null, false, null, 28, null);
        boolean z5 = m996getForGuild14CJxO4$default != null;
        SimpleDraweeView simpleDraweeView = getBinding().guildImage;
        if (z5) {
            Intrinsics.checkNotNull(simpleDraweeView);
            SetImageUriWithCachePolicyKt.setImageUriWithCachePolicy(simpleDraweeView, m996getForGuild14CJxO4$default);
            simpleDraweeView.clearColorFilter();
        } else {
            if ((topGuild != null ? GuildId.m1176boximpl(topGuild.m306getGuildIdfYKD8eg()) : null) != null) {
                simpleDraweeView.setImageResource(R.drawable.ic_guild_icon_16dp);
                Intrinsics.checkNotNull(simpleDraweeView);
                ColorUtilsKt.setTintColor(simpleDraweeView, Integer.valueOf(this.black));
            } else {
                simpleDraweeView.setImageResource(R.drawable.ic_unknown_game_icon_16dp);
                Intrinsics.checkNotNull(simpleDraweeView);
                ColorUtilsKt.setTintColor(simpleDraweeView, Integer.valueOf(this.black));
            }
        }
        adjustImageLayout(z5, simpleDraweeView);
        FrameLayout frameLayout = getBinding().guildStroke;
        if (topGuild == null) {
            frameLayout.setBackgroundColor(Color.parseColor("#00000000"));
            frameLayout.setPadding(0, 0, 0, 0);
        } else {
            frameLayout.setBackgroundColor(this.black);
            frameLayout.setPadding(SizeUtilsKt.getDpToPx(1), SizeUtilsKt.getDpToPx(1), 0, 0);
        }
    }

    @SuppressLint({"SetTextI18n"})
    private final void configurePowerBar(CheckpointDataV2025 checkpointData, int cardColor) {
        ImageView imageView;
        getBinding().powerContainer.setBackgroundTintList(ColorStateList.valueOf(cardColor));
        getBinding().powerLevelLvl.setText("LVL ");
        getBinding().powerLevelNumber.setText(checkpointData.getPowerLevel());
        int i5 = 0;
        while (i5 < 10) {
            Integer num = this.barIds[i5];
            if (num != null && (imageView = (ImageView) findViewById(num.intValue())) != null) {
                ColorUtilsKt.setTintColor(imageView, Integer.valueOf(i5 >= checkpointData.getPowerLevelUnits() ? this.barUnfilledColor : this.black));
            }
            i5++;
        }
    }

    private final MessageComponentCheckpointCardV2025ViewBinding getBinding() {
        return (MessageComponentCheckpointCardV2025ViewBinding) this.binding.getValue();
    }

    public final int getBarUnfilledColor() {
        return this.barUnfilledColor;
    }

    public final int getBlack() {
        return this.black;
    }

    @Override // com.discord.chat.presentation.message.view.botuikit.ComponentView
    @NotNull
    public KClass getComponentType() {
        return Reflection.getOrCreateKotlinClass(CheckpointCardComponent.class);
    }

    public final int getSecondaryColor() {
        return this.secondaryColor;
    }

    public final int getTransparent() {
        return this.transparent;
    }

    @Override // com.discord.chat.presentation.message.view.botuikit.VersionedComponentView
    @NotNull
    public String getVersion() {
        return this.version;
    }

    @Override // com.discord.chat.presentation.message.view.botuikit.ComponentView
    public void onRecycle(@NotNull ComponentProvider componentProvider) {
        ComponentView.DefaultImpls.onRecycle(this, componentProvider);
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public CheckpointCardV2025ComponentView(@NotNull Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0, 4, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    @Override // com.discord.chat.presentation.message.view.botuikit.ComponentView
    public void configure(@NotNull CheckpointCardComponent component, @NotNull ComponentProvider componentProvider, @NotNull ComponentContext componentContext) {
        Intrinsics.checkNotNullParameter(component, "component");
        Intrinsics.checkNotNullParameter(componentProvider, "componentProvider");
        Intrinsics.checkNotNullParameter(componentContext, "componentContext");
        CheckpointData checkpointData = component.getCheckpointData();
        CheckpointDataV2025 checkpointDataV2025 = checkpointData instanceof CheckpointDataV2025 ? (CheckpointDataV2025) checkpointData : null;
        if (checkpointDataV2025 == null) {
            return;
        }
        Integer num = this.cardColorMap.get(checkpointDataV2025.getCardId());
        int intValue = num != null ? num.intValue() : this.cardDefaultColor;
        CheckpointEmoji topEmoji = checkpointDataV2025.getTopEmoji();
        CheckpointApplication topGame = checkpointDataV2025.getTopGame();
        CheckpointGuild topGuild = checkpointDataV2025.getTopGuild();
        CheckpointCardV2025ComponentView root = getBinding().getRoot();
        root.setVisibility(0);
        Intrinsics.checkNotNull(root);
        ViewBackgroundUtilsKt.setBackgroundRectangle$default(root, intValue, 0.0f, 0.0f, 0.0f, 0.0f, null, 0, 126, null);
        configurePowerBar(checkpointDataV2025, intValue);
        configureFooter(componentContext, checkpointDataV2025);
        getBinding().image.setBackgroundResource(R.drawable.checkpoint_card_bg);
        getBinding().image.getBackground().setAlpha(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        getBinding().imageResource.setImageURI(checkpointDataV2025.getCardAssetUrl());
        getBinding().messageCount.setText(checkpointDataV2025.getMessagesString());
        getBinding().voiceMinutes.setText(checkpointDataV2025.getVoiceString());
        getBinding().emojiCount.setText(checkpointDataV2025.getReactionString());
        configureEmoji(topEmoji);
        configureGuild(topGuild);
        configureApplication(topGame);
    }

    public /* synthetic */ CheckpointCardV2025ComponentView(Context context, AttributeSet attributeSet, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i6 & 2) != 0 ? null : attributeSet, (i6 & 4) != 0 ? 0 : i5);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public CheckpointCardV2025ComponentView(@NotNull Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        Intrinsics.checkNotNullParameter(context, "context");
        this.version = String.valueOf(CheckpointVersion.V2025.getValue());
        this.cardColorMap = v0.g(new Pair("0", Integer.valueOf(Color.parseColor("#35ED7E"))), new Pair("1", Integer.valueOf(Color.parseColor("#5EFDE2"))), new Pair("2", Integer.valueOf(Color.parseColor("#8EB6FB"))), new Pair("3", Integer.valueOf(Color.parseColor("#CA9EF9"))), new Pair("4", Integer.valueOf(Color.parseColor("#F262D5"))), new Pair("5", Integer.valueOf(Color.parseColor("#F75990"))), new Pair("6", Integer.valueOf(Color.parseColor("#FF9138"))), new Pair("7", Integer.valueOf(Color.parseColor("#FFE047"))), new Pair("8", Integer.valueOf(Color.parseColor("#D9B777"))), new Pair("9", Integer.valueOf(Color.parseColor("#EEEEEE"))));
        this.cardDefaultColor = ThemeManagerKt.getTheme().getTextBrand();
        this.secondaryColor = Color.parseColor("#10000000");
        this.black = Color.parseColor("#000000");
        this.transparent = Color.parseColor("#00000000");
        this.barUnfilledColor = Color.parseColor("#60000000");
        this.barIds = new Integer[10];
        this.binding = l.b(m.f8828i, new c0(9, this, context));
    }
}
