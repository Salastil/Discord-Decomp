package com.discord.chat.presentation.message.view.botuikit.components.checkpoint;

import android.content.Context;
import android.graphics.Bitmap;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import android.widget.ImageView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.lifecycle.s0;
import com.discord.chat.R;
import com.discord.chat.bridge.botuikit.CheckpointCardComponent;
import com.discord.chat.bridge.botuikit.CheckpointData;
import com.discord.chat.bridge.botuikit.CheckpointDataV2026;
import com.discord.chat.bridge.botuikit.CheckpointVersion;
import com.discord.chat.databinding.MessageComponentCheckpointCardV2026ViewBinding;
import com.discord.chat.presentation.message.view.botuikit.ComponentContext;
import com.discord.chat.presentation.message.view.botuikit.ComponentProvider;
import com.discord.chat.presentation.message.view.botuikit.ComponentView;
import com.discord.chat.presentation.message.view.botuikit.VersionedComponentView;
import com.discord.device.utils.DeviceReducedMotion;
import com.discord.misc.utilities.coroutines.CoroutineViewUtilsKt;
import com.discord.theme.ThemeManagerKt;
import fo.l;
import fo.m;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.collections.m0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;
import kotlinx.coroutines.Job;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000p\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010 \n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u0000 /2\u00020\u00012\b\u0012\u0004\u0012\u00020\u00030\u00022\u00020\u0004:\u0001/B'\b\u0007\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\b\u0012\b\b\u0002\u0010\t\u001a\u00020\n¢\u0006\u0004\b\u000b\u0010\fJ\u000e\u0010\u001e\u001a\b\u0012\u0004\u0012\u00020\u00030\u001fH\u0016J \u0010 \u001a\u00020!2\u0006\u0010\"\u001a\u00020\u00032\u0006\u0010#\u001a\u00020$2\u0006\u0010%\u001a\u00020&H\u0016J\b\u0010'\u001a\u00020!H\u0014J\b\u0010(\u001a\u00020!H\u0014J\u0010\u0010)\u001a\u00020!2\u0006\u0010#\u001a\u00020$H\u0016J\b\u0010*\u001a\u00020!H\u0002J\u0010\u0010+\u001a\u00020!2\u0006\u0010,\u001a\u00020-H\u0002J\b\u0010.\u001a\u00020!H\u0002R\u0014\u0010\r\u001a\u00020\u000eX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u001b\u0010\u0011\u001a\u00020\u00128BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u0015\u0010\u0016\u001a\u0004\b\u0013\u0010\u0014R\u000e\u0010\u0017\u001a\u00020\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0018\u001a\b\u0012\u0004\u0012\u00020\u000e0\u0019X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u001bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u001c\u001a\u0004\u0018\u00010\u001dX\u0082\u000e¢\u0006\u0002\n\u0000¨\u00060"}, d2 = {"Lcom/discord/chat/presentation/message/view/botuikit/components/checkpoint/CheckpointCardV2026ComponentView;", "Landroidx/constraintlayout/widget/ConstraintLayout;", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentView;", "Lcom/discord/chat/bridge/botuikit/CheckpointCardComponent;", "Lcom/discord/chat/presentation/message/view/botuikit/VersionedComponentView;", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "defStyleAttr", "", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V", "version", "", "getVersion", "()Ljava/lang/String;", "binding", "Lcom/discord/chat/databinding/MessageComponentCheckpointCardV2026ViewBinding;", "getBinding", "()Lcom/discord/chat/databinding/MessageComponentCheckpointCardV2026ViewBinding;", "binding$delegate", "Lkotlin/Lazy;", "characterSizePx", "characterLayerUrls", "", "isCharacterShown", "", "compositeJob", "Lkotlinx/coroutines/Job;", "getComponentType", "Lkotlin/reflect/KClass;", "configure", "", "component", "componentProvider", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentProvider;", "componentContext", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentContext;", "onAttachedToWindow", "onDetachedFromWindow", "onRecycle", "loadCharacter", "showCharacter", "character", "Landroid/graphics/Bitmap;", "clearCharacter", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class CheckpointCardV2026ComponentView extends ConstraintLayout implements ComponentView<CheckpointCardComponent>, VersionedComponentView {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    /* renamed from: binding$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy binding;

    @NotNull
    private List<String> characterLayerUrls;
    private final int characterSizePx;
    private Job compositeJob;
    private boolean isCharacterShown;

    @NotNull
    private final String version;

    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t¨\u0006\n"}, d2 = {"Lcom/discord/chat/presentation/message/view/botuikit/components/checkpoint/CheckpointCardV2026ComponentView$Companion;", "", "<init>", "()V", "inflateComponent", "Lcom/discord/chat/presentation/message/view/botuikit/components/checkpoint/CheckpointCardV2026ComponentView;", "context", "Landroid/content/Context;", "root", "Landroid/view/ViewGroup;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        public final CheckpointCardV2026ComponentView inflateComponent(@NotNull Context context, @NotNull ViewGroup root) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(root, "root");
            CheckpointCardV2026ComponentView root2 = MessageComponentCheckpointCardV2026ViewBinding.inflate(LayoutInflater.from(context), root, false).getRoot();
            Intrinsics.checkNotNullExpressionValue(root2, "getRoot(...)");
            return root2;
        }

        private Companion() {
        }
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public CheckpointCardV2026ComponentView(@NotNull Context context) {
        this(context, null, 0, 6, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    private final void clearCharacter() {
        Job job = this.compositeJob;
        if (job != null) {
            job.f(null);
        }
        this.compositeJob = null;
        this.isCharacterShown = false;
        ImageView imageView = getBinding().character;
        imageView.animate().cancel();
        imageView.setImageDrawable(null);
        imageView.setAlpha(0.0f);
    }

    private final MessageComponentCheckpointCardV2026ViewBinding getBinding() {
        return (MessageComponentCheckpointCardV2026ViewBinding) this.binding.getValue();
    }

    private final void loadCharacter() {
        List<String> list = this.characterLayerUrls;
        if (list.isEmpty()) {
            return;
        }
        Job job = this.compositeJob;
        if (job != null) {
            job.f(null);
        }
        this.compositeJob = x.t(CoroutineViewUtilsKt.getAttachedScope(this), null, new CheckpointCardV2026ComponentView$loadCharacter$1(this, list, null), 3);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void showCharacter(Bitmap character) {
        this.isCharacterShown = true;
        ImageView imageView = getBinding().character;
        imageView.setImageBitmap(character);
        DeviceReducedMotion deviceReducedMotion = DeviceReducedMotion.INSTANCE;
        Context context = imageView.getContext();
        Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
        if (deviceReducedMotion.isReducedMotionEnabled(context)) {
            imageView.setAlpha(1.0f);
        } else {
            imageView.setAlpha(0.0f);
            imageView.animate().alpha(1.0f).setDuration(150L).start();
        }
    }

    @Override // com.discord.chat.presentation.message.view.botuikit.ComponentView
    @NotNull
    public KClass getComponentType() {
        return Reflection.getOrCreateKotlinClass(CheckpointCardComponent.class);
    }

    @Override // com.discord.chat.presentation.message.view.botuikit.VersionedComponentView
    @NotNull
    public String getVersion() {
        return this.version;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (this.isCharacterShown) {
            return;
        }
        loadCharacter();
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        ImageView imageView = getBinding().character;
        imageView.animate().cancel();
        imageView.setAlpha(this.isCharacterShown ? 1.0f : 0.0f);
    }

    @Override // com.discord.chat.presentation.message.view.botuikit.ComponentView
    public void onRecycle(@NotNull ComponentProvider componentProvider) {
        Intrinsics.checkNotNullParameter(componentProvider, "componentProvider");
        clearCharacter();
        this.characterLayerUrls = m0.f13512d;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public CheckpointCardV2026ComponentView(@NotNull Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0, 4, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    @Override // com.discord.chat.presentation.message.view.botuikit.ComponentView
    public void configure(@NotNull CheckpointCardComponent component, @NotNull ComponentProvider componentProvider, @NotNull ComponentContext componentContext) {
        Intrinsics.checkNotNullParameter(component, "component");
        Intrinsics.checkNotNullParameter(componentProvider, "componentProvider");
        Intrinsics.checkNotNullParameter(componentContext, "componentContext");
        CheckpointData checkpointData = component.getCheckpointData();
        CheckpointDataV2026 checkpointDataV2026 = checkpointData instanceof CheckpointDataV2026 ? (CheckpointDataV2026) checkpointData : null;
        if (checkpointDataV2026 == null) {
            return;
        }
        getBinding().cardBackground.setBackgroundColor(ThemeManagerKt.getTheme().getEmbedBackground());
        List<String> characterLayerUrls = checkpointDataV2026.getCharacterLayerUrls();
        if (Intrinsics.areEqual(characterLayerUrls, this.characterLayerUrls)) {
            return;
        }
        clearCharacter();
        this.characterLayerUrls = characterLayerUrls;
        if (isAttachedToWindow()) {
            loadCharacter();
        }
    }

    public /* synthetic */ CheckpointCardV2026ComponentView(Context context, AttributeSet attributeSet, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i6 & 2) != 0 ? null : attributeSet, (i6 & 4) != 0 ? 0 : i5);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public CheckpointCardV2026ComponentView(@NotNull Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        Intrinsics.checkNotNullParameter(context, "context");
        this.version = String.valueOf(CheckpointVersion.V2026.getValue());
        this.binding = l.b(m.f8828i, new s0(16, this));
        this.characterSizePx = getResources().getDimensionPixelSize(R.dimen.checkpoint_2026_character_size);
        this.characterLayerUrls = m0.f13512d;
    }
}
