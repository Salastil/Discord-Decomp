package com.discord.sticker.sticker_types;

import a3.e;
import android.content.Context;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.ShapeDrawable;
import android.graphics.drawable.shapes.OvalShape;
import com.discord.image.animated_image.animated_image_utils.AnimatedImageStateManager;
import com.discord.jank_stats.JankRecordStore;
import com.discord.misc.utilities.coroutines.AttachedViewCoroutineScope;
import com.discord.misc.utilities.coroutines.CoroutineViewUtilsKt;
import com.discord.rlottie.RLottieDrawable;
import com.discord.sticker.sticker_types.RLottieImageView;
import com.discord.theme.ThemeManagerKt;
import k0.d;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import nr.g0;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0005\b\u0000\u0018\u00002\u00020\u0001:\u0001\u0014B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u000e\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\nJ\u0010\u0010\u000e\u001a\u00020\f2\b\b\u0002\u0010\u000f\u001a\u00020\u0010J\b\u0010\u0011\u001a\u00020\fH\u0014J\b\u0010\u0012\u001a\u00020\fH\u0014J\u0010\u0010\u0013\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\nH\u0002R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\tX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"Lcom/discord/sticker/sticker_types/RLottieImageView;", "Lcom/discord/rlottie/RLottieImageView;", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "placeholder", "Landroid/graphics/drawable/ShapeDrawable;", "rLottieStateManager", "Lcom/discord/image/animated_image/animated_image_utils/AnimatedImageStateManager;", "Lcom/discord/sticker/sticker_types/RLottieImageView$Config;", "loadImage", "", "config", "recycle", "resetState", "", "onDetachedFromWindow", "onAttachedToWindow", "fetchSticker", "Config", "sticker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class RLottieImageView extends com.discord.rlottie.RLottieImageView {

    @NotNull
    private final ShapeDrawable placeholder;

    @NotNull
    private final AnimatedImageStateManager<Config> rLottieStateManager;

    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\b\n\u0002\b\u001a\b\u0086\b\u0018\u00002\u00020\u0001B7\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\u0007\u0012\u0006\u0010\t\u001a\u00020\u0003\u0012\u0006\u0010\n\u001a\u00020\u0007¢\u0006\u0004\b\u000b\u0010\fJ\t\u0010\u0016\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0017\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0018\u001a\u00020\u0007HÆ\u0003J\t\u0010\u0019\u001a\u00020\u0007HÆ\u0003J\t\u0010\u001a\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001b\u001a\u00020\u0007HÆ\u0003JE\u0010\u001c\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\u00072\b\b\u0002\u0010\t\u001a\u00020\u00032\b\b\u0002\u0010\n\u001a\u00020\u0007HÆ\u0001J\u0013\u0010\u001d\u001a\u00020\u00052\b\u0010\u001e\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001f\u001a\u00020\u0007HÖ\u0001J\t\u0010 \u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\b\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0012R\u0011\u0010\t\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u000eR\u0011\u0010\n\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0012¨\u0006!"}, d2 = {"Lcom/discord/sticker/sticker_types/RLottieImageView$Config;", "", "url", "", "animate", "", "widthDp", "", "heightDp", "asset", "renderMode", "<init>", "(Ljava/lang/String;ZIILjava/lang/String;I)V", "getUrl", "()Ljava/lang/String;", "getAnimate", "()Z", "getWidthDp", "()I", "getHeightDp", "getAsset", "getRenderMode", "component1", "component2", "component3", "component4", "component5", "component6", "copy", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "sticker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class Config {
        private final boolean animate;

        @NotNull
        private final String asset;
        private final int heightDp;
        private final int renderMode;

        @NotNull
        private final String url;
        private final int widthDp;

        public Config(@NotNull String url, boolean z5, int i5, int i6, @NotNull String asset, int i10) {
            Intrinsics.checkNotNullParameter(url, "url");
            Intrinsics.checkNotNullParameter(asset, "asset");
            this.url = url;
            this.animate = z5;
            this.widthDp = i5;
            this.heightDp = i6;
            this.asset = asset;
            this.renderMode = i10;
        }

        public static /* synthetic */ Config copy$default(Config config, String str, boolean z5, int i5, int i6, String str2, int i10, int i11, Object obj) {
            if ((i11 & 1) != 0) {
                str = config.url;
            }
            if ((i11 & 2) != 0) {
                z5 = config.animate;
            }
            if ((i11 & 4) != 0) {
                i5 = config.widthDp;
            }
            if ((i11 & 8) != 0) {
                i6 = config.heightDp;
            }
            if ((i11 & 16) != 0) {
                str2 = config.asset;
            }
            if ((i11 & 32) != 0) {
                i10 = config.renderMode;
            }
            String str3 = str2;
            int i12 = i10;
            return config.copy(str, z5, i5, i6, str3, i12);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final String getUrl() {
            return this.url;
        }

        /* renamed from: component2, reason: from getter */
        public final boolean getAnimate() {
            return this.animate;
        }

        /* renamed from: component3, reason: from getter */
        public final int getWidthDp() {
            return this.widthDp;
        }

        /* renamed from: component4, reason: from getter */
        public final int getHeightDp() {
            return this.heightDp;
        }

        @NotNull
        /* renamed from: component5, reason: from getter */
        public final String getAsset() {
            return this.asset;
        }

        /* renamed from: component6, reason: from getter */
        public final int getRenderMode() {
            return this.renderMode;
        }

        @NotNull
        public final Config copy(@NotNull String url, boolean animate, int widthDp, int heightDp, @NotNull String asset, int renderMode) {
            Intrinsics.checkNotNullParameter(url, "url");
            Intrinsics.checkNotNullParameter(asset, "asset");
            return new Config(url, animate, widthDp, heightDp, asset, renderMode);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof Config)) {
                return false;
            }
            Config config = (Config) other;
            return Intrinsics.areEqual(this.url, config.url) && this.animate == config.animate && this.widthDp == config.widthDp && this.heightDp == config.heightDp && Intrinsics.areEqual(this.asset, config.asset) && this.renderMode == config.renderMode;
        }

        public final boolean getAnimate() {
            return this.animate;
        }

        @NotNull
        public final String getAsset() {
            return this.asset;
        }

        public final int getHeightDp() {
            return this.heightDp;
        }

        public final int getRenderMode() {
            return this.renderMode;
        }

        @NotNull
        public final String getUrl() {
            return this.url;
        }

        public final int getWidthDp() {
            return this.widthDp;
        }

        public int hashCode() {
            return Integer.hashCode(this.renderMode) + e.d(com.discord.chat.bridge.botuikit.a.u(this.heightDp, com.discord.chat.bridge.botuikit.a.u(this.widthDp, d.d(this.url.hashCode() * 31, 31, this.animate), 31), 31), 31, this.asset);
        }

        @NotNull
        public String toString() {
            String str = this.url;
            boolean z5 = this.animate;
            int i5 = this.widthDp;
            int i6 = this.heightDp;
            String str2 = this.asset;
            int i10 = this.renderMode;
            StringBuilder sb2 = new StringBuilder("Config(url=");
            sb2.append(str);
            sb2.append(", animate=");
            sb2.append(z5);
            sb2.append(", widthDp=");
            e.y(sb2, i5, ", heightDp=", i6, ", asset=");
            sb2.append(str2);
            sb2.append(", renderMode=");
            sb2.append(i10);
            sb2.append(")");
            return sb2.toString();
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RLottieImageView(@NotNull Context context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        ShapeDrawable shapeDrawable = new ShapeDrawable();
        shapeDrawable.setShape(new OvalShape());
        shapeDrawable.getPaint().setColor(ThemeManagerKt.getTheme().getBackgroundModMuted());
        this.placeholder = shapeDrawable;
        final int i5 = 0;
        Function0 function0 = new Function0(this) { // from class: com.discord.sticker.sticker_types.a

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ RLottieImageView f4378e;

            {
                this.f4378e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                Unit rLottieStateManager$lambda$1;
                Unit rLottieStateManager$lambda$2;
                switch (i5) {
                    case 0:
                        rLottieStateManager$lambda$1 = RLottieImageView.rLottieStateManager$lambda$1(this.f4378e);
                        return rLottieStateManager$lambda$1;
                    default:
                        rLottieStateManager$lambda$2 = RLottieImageView.rLottieStateManager$lambda$2(this.f4378e);
                        return rLottieStateManager$lambda$2;
                }
            }
        };
        final int i6 = 1;
        Function0 function02 = new Function0(this) { // from class: com.discord.sticker.sticker_types.a

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ RLottieImageView f4378e;

            {
                this.f4378e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                Unit rLottieStateManager$lambda$1;
                Unit rLottieStateManager$lambda$2;
                switch (i6) {
                    case 0:
                        rLottieStateManager$lambda$1 = RLottieImageView.rLottieStateManager$lambda$1(this.f4378e);
                        return rLottieStateManager$lambda$1;
                    default:
                        rLottieStateManager$lambda$2 = RLottieImageView.rLottieStateManager$lambda$2(this.f4378e);
                        return rLottieStateManager$lambda$2;
                }
            }
        };
        final int i10 = 0;
        Function1 function1 = new Function1(this) { // from class: com.discord.sticker.sticker_types.b

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ RLottieImageView f4380e;

            {
                this.f4380e = this;
            }

            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit rLottieStateManager$lambda$3;
                boolean rLottieStateManager$lambda$4;
                Unit rLottieStateManager$lambda$5;
                switch (i10) {
                    case 0:
                        rLottieStateManager$lambda$3 = RLottieImageView.rLottieStateManager$lambda$3(this.f4380e, (RLottieImageView.Config) obj);
                        return rLottieStateManager$lambda$3;
                    case 1:
                        rLottieStateManager$lambda$4 = RLottieImageView.rLottieStateManager$lambda$4(this.f4380e, (RLottieImageView.Config) obj);
                        return Boolean.valueOf(rLottieStateManager$lambda$4);
                    default:
                        rLottieStateManager$lambda$5 = RLottieImageView.rLottieStateManager$lambda$5(this.f4380e, (RLottieImageView.Config) obj);
                        return rLottieStateManager$lambda$5;
                }
            }
        };
        final int i11 = 1;
        Function1 function12 = new Function1(this) { // from class: com.discord.sticker.sticker_types.b

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ RLottieImageView f4380e;

            {
                this.f4380e = this;
            }

            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit rLottieStateManager$lambda$3;
                boolean rLottieStateManager$lambda$4;
                Unit rLottieStateManager$lambda$5;
                switch (i11) {
                    case 0:
                        rLottieStateManager$lambda$3 = RLottieImageView.rLottieStateManager$lambda$3(this.f4380e, (RLottieImageView.Config) obj);
                        return rLottieStateManager$lambda$3;
                    case 1:
                        rLottieStateManager$lambda$4 = RLottieImageView.rLottieStateManager$lambda$4(this.f4380e, (RLottieImageView.Config) obj);
                        return Boolean.valueOf(rLottieStateManager$lambda$4);
                    default:
                        rLottieStateManager$lambda$5 = RLottieImageView.rLottieStateManager$lambda$5(this.f4380e, (RLottieImageView.Config) obj);
                        return rLottieStateManager$lambda$5;
                }
            }
        };
        final int i12 = 2;
        this.rLottieStateManager = new AnimatedImageStateManager<>(function0, function02, null, function1, function12, new Function1(this) { // from class: com.discord.sticker.sticker_types.b

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ RLottieImageView f4380e;

            {
                this.f4380e = this;
            }

            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit rLottieStateManager$lambda$3;
                boolean rLottieStateManager$lambda$4;
                Unit rLottieStateManager$lambda$5;
                switch (i12) {
                    case 0:
                        rLottieStateManager$lambda$3 = RLottieImageView.rLottieStateManager$lambda$3(this.f4380e, (RLottieImageView.Config) obj);
                        return rLottieStateManager$lambda$3;
                    case 1:
                        rLottieStateManager$lambda$4 = RLottieImageView.rLottieStateManager$lambda$4(this.f4380e, (RLottieImageView.Config) obj);
                        return Boolean.valueOf(rLottieStateManager$lambda$4);
                    default:
                        rLottieStateManager$lambda$5 = RLottieImageView.rLottieStateManager$lambda$5(this.f4380e, (RLottieImageView.Config) obj);
                        return rLottieStateManager$lambda$5;
                }
            }
        }, 4, null);
    }

    private final void fetchSticker(Config config) {
        AttachedViewCoroutineScope attachedScope = CoroutineViewUtilsKt.getAttachedScope(this);
        ur.e eVar = g0.a;
        x.t(attachedScope, ur.d.f19093i, new RLottieImageView$fetchSticker$1(this, config, null), 2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit rLottieStateManager$lambda$1(RLottieImageView rLottieImageView) {
        rLottieImageView.playAnimation();
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit rLottieStateManager$lambda$2(RLottieImageView rLottieImageView) {
        rLottieImageView.pauseAnimation();
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit rLottieStateManager$lambda$3(RLottieImageView rLottieImageView, Config it) {
        Intrinsics.checkNotNullParameter(it, "it");
        rLottieImageView.recycle(false);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean rLottieStateManager$lambda$4(RLottieImageView rLottieImageView, Config it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return rLottieImageView.isAttachedToWindow();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit rLottieStateManager$lambda$5(RLottieImageView rLottieImageView, Config config) {
        Intrinsics.checkNotNullParameter(config, "config");
        rLottieImageView.fetchSticker(config);
        return Unit.a;
    }

    public static /* synthetic */ void recycle$default(RLottieImageView rLottieImageView, boolean z5, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            z5 = false;
        }
        rLottieImageView.recycle(z5);
    }

    public final void loadImage(@NotNull Config config) {
        Intrinsics.checkNotNullParameter(config, "config");
        this.rLottieStateManager.onTryFetch(config);
    }

    @Override // com.discord.rlottie.RLottieImageView, android.widget.ImageView, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.rLottieStateManager.onAttachedToWindow();
    }

    @Override // com.discord.rlottie.RLottieImageView, android.widget.ImageView, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.rLottieStateManager.onDetachedFromWindow();
    }

    public final void recycle(boolean resetState) {
        Drawable drawable = getDrawable();
        if (drawable instanceof RLottieDrawable) {
            RLottieDrawable rLottieDrawable = (RLottieDrawable) drawable;
            rLottieDrawable.stop();
            rLottieDrawable.recycle();
        }
        setImageDrawable(null);
        if (resetState) {
            this.rLottieStateManager.reset();
        }
        setBackground(this.placeholder);
    }
}
