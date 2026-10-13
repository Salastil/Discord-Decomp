package com.discord.chat.presentation.message.view.botuikit.components;

import android.content.Context;
import android.graphics.drawable.GradientDrawable;
import android.net.Uri;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.lifecycle.s0;
import com.discord.SetTextSizeSpKt;
import com.discord.chat.bridge.botuikit.ContentInventoryEntry;
import com.discord.chat.bridge.botuikit.ContentInventoryEntryComponent;
import com.discord.chat.bridge.botuikit.ContentInventoryEntryComponentKt;
import com.discord.chat.bridge.botuikit.GradientColor;
import com.discord.chat.bridge.botuikit.Subtitle;
import com.discord.chat.databinding.MessageComponentContentInventoryViewBinding;
import com.discord.chat.presentation.message.view.botuikit.ComponentContext;
import com.discord.chat.presentation.message.view.botuikit.ComponentProvider;
import com.discord.chat.presentation.message.view.botuikit.ComponentView;
import com.discord.fonts.DiscordFont;
import com.discord.fonts.DiscordFontUtilsKt;
import com.discord.image.fresco.SetImageUriWithCachePolicyKt;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.misc.utilities.view.ViewBackgroundUtilsKt;
import com.discord.misc.utilities.view.ViewUtilsKt;
import com.discord.notifications.renderer.NotificationRenderer;
import com.discord.react_asset_fetcher.ReactAssetUtilsKt;
import com.discord.theme.R;
import com.discord.theme.utils.ColorUtilsKt;
import com.facebook.drawee.backends.pipeline.PipelineDraweeControllerBuilder;
import com.facebook.drawee.view.SimpleDraweeView;
import com.facebook.imagepipeline.common.RotationOptions;
import com.facebook.imagepipeline.request.ImageRequest;
import com.facebook.imagepipeline.request.ImageRequestBuilder;
import com.facebook.react.modules.dialog.AlertFragment;
import d9.a;
import fo.l;
import fo.m;
import g9.c;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.reflect.KClass;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000R\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u0000 \u001e2\u00020\u00012\b\u0012\u0004\u0012\u00020\u00030\u0002:\u0001\u001eB'\b\u0007\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\b\u0002\u0010\b\u001a\u00020\t¢\u0006\u0004\b\n\u0010\u000bJ\u000e\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\u00030\u0016H\u0016J \u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u00032\u0006\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u001dH\u0016R\u0016\u0010\f\u001a\n \u000e*\u0004\u0018\u00010\r0\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u001b\u0010\u000f\u001a\u00020\u00108BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u0013\u0010\u0014\u001a\u0004\b\u0011\u0010\u0012¨\u0006\u001f"}, d2 = {"Lcom/discord/chat/presentation/message/view/botuikit/components/ContentInventoryComponentView;", "Landroidx/constraintlayout/widget/ConstraintLayout;", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentView;", "Lcom/discord/chat/bridge/botuikit/ContentInventoryEntryComponent;", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "defStyleAttr", "", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V", "draweeControllerBuilder", "Lcom/facebook/drawee/backends/pipeline/PipelineDraweeControllerBuilder;", "kotlin.jvm.PlatformType", "binding", "Lcom/discord/chat/databinding/MessageComponentContentInventoryViewBinding;", "getBinding", "()Lcom/discord/chat/databinding/MessageComponentContentInventoryViewBinding;", "binding$delegate", "Lkotlin/Lazy;", "getComponentType", "Lkotlin/reflect/KClass;", "configure", "", "component", "componentProvider", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentProvider;", "componentContext", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentContext;", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nContentInventoryComponentView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ContentInventoryComponentView.kt\ncom/discord/chat/presentation/message/view/botuikit/components/ContentInventoryComponentView\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,187:1\n1#2:188\n1563#3:189\n1634#3,3:190\n*S KotlinDebug\n*F\n+ 1 ContentInventoryComponentView.kt\ncom/discord/chat/presentation/message/view/botuikit/components/ContentInventoryComponentView\n*L\n80#1:189\n80#1:190,3\n*E\n"})
/* loaded from: classes.dex */
public final class ContentInventoryComponentView extends ConstraintLayout implements ComponentView<ContentInventoryEntryComponent> {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    /* renamed from: binding$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy binding;
    private final PipelineDraweeControllerBuilder draweeControllerBuilder;

    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t¨\u0006\n"}, d2 = {"Lcom/discord/chat/presentation/message/view/botuikit/components/ContentInventoryComponentView$Companion;", "", "<init>", "()V", "inflateComponent", "Lcom/discord/chat/presentation/message/view/botuikit/components/ContentInventoryComponentView;", "context", "Landroid/content/Context;", "root", "Landroid/view/ViewGroup;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        public final ContentInventoryComponentView inflateComponent(@NotNull Context context, @NotNull ViewGroup root) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(root, "root");
            ContentInventoryComponentView root2 = MessageComponentContentInventoryViewBinding.inflate(LayoutInflater.from(context), root, false).getRoot();
            Intrinsics.checkNotNullExpressionValue(root2, "getRoot(...)");
            return root2;
        }

        private Companion() {
        }
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public ContentInventoryComponentView(@NotNull Context context) {
        this(context, null, 0, 6, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final MessageComponentContentInventoryViewBinding binding_delegate$lambda$4(ContentInventoryComponentView contentInventoryComponentView) {
        MessageComponentContentInventoryViewBinding bind = MessageComponentContentInventoryViewBinding.bind(contentInventoryComponentView);
        TextView textView = bind.contentInventoryComponentUsername;
        Intrinsics.checkNotNull(textView);
        DiscordFont discordFont = DiscordFont.PrimarySemibold;
        DiscordFontUtilsKt.setDiscordFont(textView, discordFont);
        SetTextSizeSpKt.setTextSizeSp(textView, 14.0f);
        textView.setTextColor(ColorUtilsKt.getColorCompat(textView, R.color.primary_160));
        TextView textView2 = bind.contentInventoryComponentTitle;
        Intrinsics.checkNotNull(textView2);
        DiscordFontUtilsKt.setDiscordFont(textView2, discordFont);
        SetTextSizeSpKt.setTextSizeSp(textView2, 16.0f);
        textView2.setTextColor(ColorUtilsKt.getColorCompat(textView2, R.color.primary_160));
        TextView textView3 = bind.contentInventoryComponentSubtitle;
        Intrinsics.checkNotNull(textView3);
        DiscordFontUtilsKt.setDiscordFont(textView3, DiscordFont.PrimaryNormal);
        SetTextSizeSpKt.setTextSizeSp(textView3, 14.0f);
        textView3.setTextColor(ColorUtilsKt.getColorCompat(textView3, R.color.primary_200));
        return bind;
    }

    private final MessageComponentContentInventoryViewBinding getBinding() {
        return (MessageComponentContentInventoryViewBinding) this.binding.getValue();
    }

    @Override // com.discord.chat.presentation.message.view.botuikit.ComponentView
    @NotNull
    public KClass getComponentType() {
        return Reflection.getOrCreateKotlinClass(ContentInventoryEntryComponent.class);
    }

    @Override // com.discord.chat.presentation.message.view.botuikit.ComponentView
    public void onRecycle(@NotNull ComponentProvider componentProvider) {
        ComponentView.DefaultImpls.onRecycle(this, componentProvider);
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public ContentInventoryComponentView(@NotNull Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0, 4, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    @Override // com.discord.chat.presentation.message.view.botuikit.ComponentView
    public void configure(@NotNull ContentInventoryEntryComponent component, @NotNull ComponentProvider componentProvider, @NotNull ComponentContext componentContext) {
        Intrinsics.checkNotNullParameter(component, "component");
        Intrinsics.checkNotNullParameter(componentProvider, "componentProvider");
        Intrinsics.checkNotNullParameter(componentContext, "componentContext");
        ContentInventoryEntry contentInventoryEntry = component.getContentInventoryEntry();
        if (contentInventoryEntry == null) {
            getBinding().getRoot().setVisibility(8);
            return;
        }
        List<GradientColor> gradientColors = contentInventoryEntry.getGradientColors();
        ArrayList arrayList = new ArrayList(d0.l(gradientColors, 10));
        Iterator<T> it = gradientColors.iterator();
        while (it.hasNext()) {
            arrayList.add(Integer.valueOf(ContentInventoryEntryComponentKt.toColorInt((GradientColor) it.next())));
        }
        int[] h0 = CollectionsKt.h0(arrayList);
        ContentInventoryComponentView root = getBinding().getRoot();
        root.setVisibility(0);
        Intrinsics.checkNotNull(root);
        ViewBackgroundUtilsKt.setBackgroundRectangle$default(root, h0, GradientDrawable.Orientation.TL_BR, SizeUtilsKt.getDpToPx(16), null, 0, 24, null);
        ContentInventoryComponentViewKt.applyClickable(root, componentContext, contentInventoryEntry, contentInventoryEntry.getClickable(), "container");
        TextView textView = getBinding().contentInventoryComponentUsername;
        textView.setText(contentInventoryEntry.getUserActionDescription());
        Intrinsics.checkNotNull(textView);
        ContentInventoryComponentViewKt.applyClickable(textView, componentContext, contentInventoryEntry, contentInventoryEntry.getUserClickable(), NotificationRenderer.USERNAME);
        TextView textView2 = getBinding().contentInventoryComponentTitle;
        textView2.setText(contentInventoryEntry.getTitle());
        Intrinsics.checkNotNull(textView2);
        ContentInventoryComponentViewKt.applyClickable(textView2, componentContext, contentInventoryEntry, contentInventoryEntry.getTitleClickable(), AlertFragment.ARG_TITLE);
        TextView textView3 = getBinding().contentInventoryComponentSubtitle;
        Intrinsics.checkNotNull(textView3);
        Subtitle subtitle = contentInventoryEntry.getSubtitle();
        ViewUtilsKt.setOptionalText(textView3, subtitle != null ? subtitle.getText() : null);
        Subtitle subtitle2 = contentInventoryEntry.getSubtitle();
        textView3.setContentDescription(subtitle2 != null ? subtitle2.getAriaDescription() : null);
        Subtitle subtitle3 = contentInventoryEntry.getSubtitle();
        ContentInventoryComponentViewKt.applyClickable(textView3, componentContext, contentInventoryEntry, subtitle3 != null ? subtitle3.getClickable() : null, "subtitle");
        SimpleDraweeView simpleDraweeView = getBinding().contentInventoryComponentBadgeIcon;
        Intrinsics.checkNotNull(simpleDraweeView);
        Subtitle subtitle4 = contentInventoryEntry.getSubtitle();
        ReactAssetUtilsKt.setOptionalReactImageUrl(simpleDraweeView, subtitle4 != null ? subtitle4.getBadgeUrl() : null);
        Subtitle subtitle5 = contentInventoryEntry.getSubtitle();
        ContentInventoryComponentViewKt.applyClickable(simpleDraweeView, componentContext, contentInventoryEntry, subtitle5 != null ? subtitle5.getClickable() : null, "subtitle");
        SimpleDraweeView simpleDraweeView2 = getBinding().contentInventoryComponentAvatarImage;
        Intrinsics.checkNotNull(simpleDraweeView2);
        SetImageUriWithCachePolicyKt.setImageUriWithCachePolicy(simpleDraweeView2, contentInventoryEntry.getAvatarUrl());
        ContentInventoryComponentViewKt.applyClickable(simpleDraweeView2, componentContext, contentInventoryEntry, contentInventoryEntry.getUserClickable(), "avatar");
        SimpleDraweeView simpleDraweeView3 = getBinding().contentInventoryComponentMediaImage;
        PipelineDraweeControllerBuilder pipelineDraweeControllerBuilder = this.draweeControllerBuilder;
        Intrinsics.checkNotNull(simpleDraweeView3);
        pipelineDraweeControllerBuilder.f4417d = ContentInventoryComponentViewKt.getContentControllerListener(simpleDraweeView3);
        String imageUrl = contentInventoryEntry.getImageUrl();
        if (imageUrl == null || imageUrl.isEmpty()) {
            pipelineDraweeControllerBuilder.f4415b = ImageRequest.fromUri(imageUrl);
        } else {
            Uri parse = Uri.parse(imageUrl);
            if (parse == null) {
                pipelineDraweeControllerBuilder.f4415b = null;
            } else {
                ImageRequestBuilder d6 = ImageRequestBuilder.d(parse);
                d6.f4859e = RotationOptions.f4587e;
                pipelineDraweeControllerBuilder.f4415b = d6.a();
            }
        }
        pipelineDraweeControllerBuilder.f4420g = simpleDraweeView3.getController();
        c a = pipelineDraweeControllerBuilder.a();
        Intrinsics.checkNotNullExpressionValue(a, "build(...)");
        simpleDraweeView3.setController(a);
        ContentInventoryComponentViewKt.applyClickable(simpleDraweeView3, componentContext, contentInventoryEntry, contentInventoryEntry.getImageClickable(), "media");
        SimpleDraweeView simpleDraweeView4 = getBinding().contentInventoryComponentPlatformIcon;
        Intrinsics.checkNotNull(simpleDraweeView4);
        ReactAssetUtilsKt.setOptionalReactImageUrl(simpleDraweeView4, contentInventoryEntry.getPlatformIconUrl());
        ContentInventoryComponentViewKt.applyClickable(simpleDraweeView4, componentContext, contentInventoryEntry, contentInventoryEntry.getPlatformClickable(), "platform");
    }

    public /* synthetic */ ContentInventoryComponentView(Context context, AttributeSet attributeSet, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i6 & 2) != 0 ? null : attributeSet, (i6 & 4) != 0 ? 0 : i5);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ContentInventoryComponentView(@NotNull Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        Intrinsics.checkNotNullParameter(context, "context");
        this.draweeControllerBuilder = a.f7432b.get();
        this.binding = l.b(m.f8828i, new s0(13, this));
    }
}
