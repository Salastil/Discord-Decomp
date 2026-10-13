package com.discord.image.animated_image.apng;

import android.content.Context;
import android.graphics.drawable.Drawable;
import androidx.appcompat.widget.z;
import com.discord.file_downloader.FileDownloader;
import com.discord.image.animated_image.animated_image_utils.AnimatedImageStateManager;
import com.discord.image.animated_image.apng.APNGView;
import com.discord.jank_stats.JankRecordStore;
import com.discord.misc.utilities.coroutines.AttachedViewCoroutineScope;
import com.discord.misc.utilities.coroutines.CoroutineViewUtilsKt;
import com.linecorp.apng.ApngDrawable;
import java.io.File;
import java.security.MessageDigest;
import java.util.Arrays;
import k0.d;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;
import kotlinx.coroutines.flow.Flow;
import nr.g0;
import nr.x;
import org.jetbrains.annotations.NotNull;
import ur.e;

@Metadata(d1 = {"\u0000B\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\t\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0005\u0018\u0000 (2\u00020\u0001:\u0002()B\u000f\u0012\u0006\u0010\u0003\u001a\u00020\u0002¢\u0006\u0004\b\u0004\u0010\u0005J\u0017\u0010\t\u001a\u00020\b2\u0006\u0010\u0007\u001a\u00020\u0006H\u0002¢\u0006\u0004\b\t\u0010\nJ\u000f\u0010\u000b\u001a\u00020\bH\u0002¢\u0006\u0004\b\u000b\u0010\fJ\u000f\u0010\r\u001a\u00020\bH\u0002¢\u0006\u0004\b\r\u0010\fJ\u000f\u0010\u000e\u001a\u00020\bH\u0002¢\u0006\u0004\b\u000e\u0010\fJ\r\u0010\u000f\u001a\u00020\b¢\u0006\u0004\b\u000f\u0010\fJ\r\u0010\u0010\u001a\u00020\b¢\u0006\u0004\b\u0010\u0010\fJ\u0015\u0010\u0011\u001a\u00020\b2\u0006\u0010\u0007\u001a\u00020\u0006¢\u0006\u0004\b\u0011\u0010\nJ!\u0010\u0015\u001a\u00020\b2\b\b\u0002\u0010\u0013\u001a\u00020\u00122\b\b\u0002\u0010\u0014\u001a\u00020\u0012¢\u0006\u0004\b\u0015\u0010\u0016J\u000f\u0010\u0017\u001a\u00020\bH\u0014¢\u0006\u0004\b\u0017\u0010\fJ\u000f\u0010\u0018\u001a\u00020\bH\u0014¢\u0006\u0004\b\u0018\u0010\fJ\u0015\u0010\u001b\u001a\u00020\b2\u0006\u0010\u001a\u001a\u00020\u0019¢\u0006\u0004\b\u001b\u0010\u001cR0\u0010\u001f\u001a\u0010\u0012\u0004\u0012\u00020\u001e\u0012\u0004\u0012\u00020\b\u0018\u00010\u001d8\u0006@\u0006X\u0086\u000e¢\u0006\u0012\n\u0004\b\u001f\u0010 \u001a\u0004\b!\u0010\"\"\u0004\b#\u0010$R\u001a\u0010&\u001a\b\u0012\u0004\u0012\u00020\u00060%8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b&\u0010'¨\u0006*"}, d2 = {"Lcom/discord/image/animated_image/apng/APNGView;", "Landroidx/appcompat/widget/z;", "Landroid/content/Context;", "context", "<init>", "(Landroid/content/Context;)V", "Lcom/discord/image/animated_image/apng/APNGView$Config;", "config", "", "fetchAPNG", "(Lcom/discord/image/animated_image/apng/APNGView$Config;)V", "playApngAnimation", "()V", "pauseApngAnimation", "stopApngAnimation", "play", "pause", "loadImage", "", "resetState", "showLoading", "recycle", "(ZZ)V", "onDetachedFromWindow", "onAttachedToWindow", "", "positionMillis", "seek", "(J)V", "Lkotlin/Function1;", "", "onImageLoaded", "Lkotlin/jvm/functions/Function1;", "getOnImageLoaded", "()Lkotlin/jvm/functions/Function1;", "setOnImageLoaded", "(Lkotlin/jvm/functions/Function1;)V", "Lcom/discord/image/animated_image/animated_image_utils/AnimatedImageStateManager;", "apngStateManager", "Lcom/discord/image/animated_image/animated_image_utils/AnimatedImageStateManager;", "Companion", "Config", "animated_image_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class APNGView extends z {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final AnimatedImageStateManager<Config> apngStateManager;
    private Function1<? super String, Unit> onImageLoaded;

    @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0005J\u0010\u0010\u0007\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u0005H\u0002J$\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u000b0\n2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u000e\u001a\u00020\u0005¨\u0006\u000f"}, d2 = {"Lcom/discord/image/animated_image/apng/APNGView$Companion;", "", "<init>", "()V", "getFilename", "", "url", "hasFilename", "", "downloadFile", "Lkotlinx/coroutines/flow/Flow;", "Lcom/discord/file_downloader/DownloadState;", "context", "Landroid/content/Context;", "cacheDirectory", "animated_image_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nAPNGView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 APNGView.kt\ncom/discord/image/animated_image/apng/APNGView$Companion\n+ 2 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n*L\n1#1,174:1\n12897#2,3:175\n*S KotlinDebug\n*F\n+ 1 APNGView.kt\ncom/discord/image/animated_image/apng/APNGView$Companion\n*L\n149#1:175,3\n*E\n"})
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final boolean hasFilename(String url) {
            return !StringsKt.K(getFilename(url));
        }

        @NotNull
        public final Flow downloadFile(@NotNull Context context, @NotNull String url, @NotNull String cacheDirectory) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(url, "url");
            Intrinsics.checkNotNullParameter(cacheDirectory, "cacheDirectory");
            return FileDownloader.downloadFile$default(FileDownloader.INSTANCE, context, url, getFilename(url), new File(context.getCacheDir(), cacheDirectory), false, 16, null);
        }

        @NotNull
        public final String getFilename(@NotNull String url) {
            Intrinsics.checkNotNullParameter(url, "url");
            MessageDigest messageDigest = MessageDigest.getInstance("SHA-256");
            byte[] bytes = url.getBytes(Charsets.UTF_8);
            Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
            byte[] digest = messageDigest.digest(bytes);
            Intrinsics.checkNotNullExpressionValue(digest, "digest(...)");
            String str = "";
            for (byte b10 : digest) {
                String format = String.format("%02x", Arrays.copyOf(new Object[]{Byte.valueOf(b10)}, 1));
                Intrinsics.checkNotNullExpressionValue(format, "format(...)");
                str = d.k(str, format);
            }
            return str;
        }

        private Companion() {
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public APNGView(@NotNull Context context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        final int i5 = 0;
        Function0 function0 = new Function0(this) { // from class: com.discord.image.animated_image.apng.a

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ APNGView f4193e;

            {
                this.f4193e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                Unit apngStateManager$lambda$0;
                Unit apngStateManager$lambda$1;
                Unit apngStateManager$lambda$2;
                switch (i5) {
                    case 0:
                        apngStateManager$lambda$0 = APNGView.apngStateManager$lambda$0(this.f4193e);
                        return apngStateManager$lambda$0;
                    case 1:
                        apngStateManager$lambda$1 = APNGView.apngStateManager$lambda$1(this.f4193e);
                        return apngStateManager$lambda$1;
                    default:
                        apngStateManager$lambda$2 = APNGView.apngStateManager$lambda$2(this.f4193e);
                        return apngStateManager$lambda$2;
                }
            }
        };
        final int i6 = 1;
        Function0 function02 = new Function0(this) { // from class: com.discord.image.animated_image.apng.a

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ APNGView f4193e;

            {
                this.f4193e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                Unit apngStateManager$lambda$0;
                Unit apngStateManager$lambda$1;
                Unit apngStateManager$lambda$2;
                switch (i6) {
                    case 0:
                        apngStateManager$lambda$0 = APNGView.apngStateManager$lambda$0(this.f4193e);
                        return apngStateManager$lambda$0;
                    case 1:
                        apngStateManager$lambda$1 = APNGView.apngStateManager$lambda$1(this.f4193e);
                        return apngStateManager$lambda$1;
                    default:
                        apngStateManager$lambda$2 = APNGView.apngStateManager$lambda$2(this.f4193e);
                        return apngStateManager$lambda$2;
                }
            }
        };
        final int i10 = 2;
        Function0 function03 = new Function0(this) { // from class: com.discord.image.animated_image.apng.a

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ APNGView f4193e;

            {
                this.f4193e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                Unit apngStateManager$lambda$0;
                Unit apngStateManager$lambda$1;
                Unit apngStateManager$lambda$2;
                switch (i10) {
                    case 0:
                        apngStateManager$lambda$0 = APNGView.apngStateManager$lambda$0(this.f4193e);
                        return apngStateManager$lambda$0;
                    case 1:
                        apngStateManager$lambda$1 = APNGView.apngStateManager$lambda$1(this.f4193e);
                        return apngStateManager$lambda$1;
                    default:
                        apngStateManager$lambda$2 = APNGView.apngStateManager$lambda$2(this.f4193e);
                        return apngStateManager$lambda$2;
                }
            }
        };
        final int i11 = 0;
        Function1 function1 = new Function1(this) { // from class: com.discord.image.animated_image.apng.b

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ APNGView f4195e;

            {
                this.f4195e = this;
            }

            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit apngStateManager$lambda$3;
                boolean apngStateManager$lambda$4;
                Unit apngStateManager$lambda$5;
                switch (i11) {
                    case 0:
                        apngStateManager$lambda$3 = APNGView.apngStateManager$lambda$3(this.f4195e, (APNGView.Config) obj);
                        return apngStateManager$lambda$3;
                    case 1:
                        apngStateManager$lambda$4 = APNGView.apngStateManager$lambda$4(this.f4195e, (APNGView.Config) obj);
                        return Boolean.valueOf(apngStateManager$lambda$4);
                    default:
                        apngStateManager$lambda$5 = APNGView.apngStateManager$lambda$5(this.f4195e, (APNGView.Config) obj);
                        return apngStateManager$lambda$5;
                }
            }
        };
        final int i12 = 1;
        Function1 function12 = new Function1(this) { // from class: com.discord.image.animated_image.apng.b

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ APNGView f4195e;

            {
                this.f4195e = this;
            }

            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit apngStateManager$lambda$3;
                boolean apngStateManager$lambda$4;
                Unit apngStateManager$lambda$5;
                switch (i12) {
                    case 0:
                        apngStateManager$lambda$3 = APNGView.apngStateManager$lambda$3(this.f4195e, (APNGView.Config) obj);
                        return apngStateManager$lambda$3;
                    case 1:
                        apngStateManager$lambda$4 = APNGView.apngStateManager$lambda$4(this.f4195e, (APNGView.Config) obj);
                        return Boolean.valueOf(apngStateManager$lambda$4);
                    default:
                        apngStateManager$lambda$5 = APNGView.apngStateManager$lambda$5(this.f4195e, (APNGView.Config) obj);
                        return apngStateManager$lambda$5;
                }
            }
        };
        final int i13 = 2;
        this.apngStateManager = new AnimatedImageStateManager<>(function0, function02, function03, function1, function12, new Function1(this) { // from class: com.discord.image.animated_image.apng.b

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ APNGView f4195e;

            {
                this.f4195e = this;
            }

            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit apngStateManager$lambda$3;
                boolean apngStateManager$lambda$4;
                Unit apngStateManager$lambda$5;
                switch (i13) {
                    case 0:
                        apngStateManager$lambda$3 = APNGView.apngStateManager$lambda$3(this.f4195e, (APNGView.Config) obj);
                        return apngStateManager$lambda$3;
                    case 1:
                        apngStateManager$lambda$4 = APNGView.apngStateManager$lambda$4(this.f4195e, (APNGView.Config) obj);
                        return Boolean.valueOf(apngStateManager$lambda$4);
                    default:
                        apngStateManager$lambda$5 = APNGView.apngStateManager$lambda$5(this.f4195e, (APNGView.Config) obj);
                        return apngStateManager$lambda$5;
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit apngStateManager$lambda$0(APNGView aPNGView) {
        aPNGView.playApngAnimation();
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit apngStateManager$lambda$1(APNGView aPNGView) {
        aPNGView.pauseApngAnimation();
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit apngStateManager$lambda$2(APNGView aPNGView) {
        aPNGView.stopApngAnimation();
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit apngStateManager$lambda$3(APNGView aPNGView, Config config) {
        Intrinsics.checkNotNullParameter(config, "<unused var>");
        recycle$default(aPNGView, false, false, 2, null);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean apngStateManager$lambda$4(APNGView aPNGView, Config config) {
        Intrinsics.checkNotNullParameter(config, "config");
        return aPNGView.isAttachedToWindow() && INSTANCE.hasFilename(config.getUrl());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit apngStateManager$lambda$5(APNGView aPNGView, Config config) {
        Intrinsics.checkNotNullParameter(config, "config");
        aPNGView.fetchAPNG(config);
        return Unit.a;
    }

    private final void fetchAPNG(Config config) {
        AttachedViewCoroutineScope attachedScope = CoroutineViewUtilsKt.attachedScope(this, true);
        e eVar = g0.a;
        x.t(attachedScope, ur.d.f19093i, new APNGView$fetchAPNG$1(this, config, null), 2);
    }

    private final void pauseApngAnimation() {
        Drawable drawable = getDrawable();
        ApngDrawable apngDrawable = drawable instanceof ApngDrawable ? (ApngDrawable) drawable : null;
        if (apngDrawable != null) {
            apngDrawable.stop();
        }
    }

    private final void playApngAnimation() {
        Drawable drawable = getDrawable();
        ApngDrawable apngDrawable = drawable instanceof ApngDrawable ? (ApngDrawable) drawable : null;
        if (apngDrawable != null) {
            apngDrawable.start();
        }
    }

    public static /* synthetic */ void recycle$default(APNGView aPNGView, boolean z5, boolean z6, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            z5 = false;
        }
        if ((i5 & 2) != 0) {
            z6 = false;
        }
        aPNGView.recycle(z5, z6);
    }

    private final void stopApngAnimation() {
        Drawable drawable = getDrawable();
        ApngDrawable apngDrawable = drawable instanceof ApngDrawable ? (ApngDrawable) drawable : null;
        if (apngDrawable != null) {
            apngDrawable.stop();
            apngDrawable.K = null;
            apngDrawable.J = 0L;
            apngDrawable.invalidateSelf();
        }
    }

    public final Function1<String, Unit> getOnImageLoaded() {
        return this.onImageLoaded;
    }

    public final void loadImage(@NotNull Config config) {
        Intrinsics.checkNotNullParameter(config, "config");
        this.apngStateManager.onTryFetch(config);
    }

    @Override // android.widget.ImageView, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.apngStateManager.onAttachedToWindow();
    }

    @Override // android.widget.ImageView, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.apngStateManager.onDetachedFromWindow();
    }

    public final void pause() {
        this.apngStateManager.pause();
    }

    public final void play() {
        this.apngStateManager.play();
    }

    public final void recycle(boolean resetState, boolean showLoading) {
        Drawable drawable = getDrawable();
        if (drawable instanceof ApngDrawable) {
            ApngDrawable apngDrawable = (ApngDrawable) drawable;
            apngDrawable.stop();
            apngDrawable.f6495d.a.recycle();
        }
        setImageDrawable(null);
        if (resetState) {
            this.apngStateManager.reset();
        }
        if (showLoading) {
            setBackground(null);
        }
    }

    public final void seek(long positionMillis) {
        Drawable drawable = getDrawable();
        ApngDrawable apngDrawable = drawable instanceof ApngDrawable ? (ApngDrawable) drawable : null;
        if (apngDrawable != null) {
            if (positionMillis < 0) {
                throw new IllegalArgumentException("positionMillis must be positive value");
            }
            apngDrawable.K = null;
            apngDrawable.J = positionMillis;
            apngDrawable.invalidateSelf();
        }
    }

    public final void setOnImageLoaded(Function1<? super String, Unit> function1) {
        this.onImageLoaded = function1;
    }

    @Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u001b\b\u0086\b\u0018\u00002\u00020\u0001B=\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0005\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\b\u0012\b\u0010\t\u001a\u0004\u0018\u00010\b\u0012\u0006\u0010\n\u001a\u00020\u0003¢\u0006\u0004\b\u000b\u0010\fJ\t\u0010\u0017\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0018\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0019\u001a\u00020\u0005HÆ\u0003J\u0010\u0010\u001a\u001a\u0004\u0018\u00010\bHÆ\u0003¢\u0006\u0002\u0010\u0013J\u0010\u0010\u001b\u001a\u0004\u0018\u00010\bHÆ\u0003¢\u0006\u0002\u0010\u0013J\t\u0010\u001c\u001a\u00020\u0003HÆ\u0003JN\u0010\u001d\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00052\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\b2\b\b\u0002\u0010\n\u001a\u00020\u0003HÆ\u0001¢\u0006\u0002\u0010\u001eJ\u0013\u0010\u001f\u001a\u00020\u00052\b\u0010 \u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010!\u001a\u00020\bHÖ\u0001J\t\u0010\"\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0010R\u0015\u0010\u0007\u001a\u0004\u0018\u00010\b¢\u0006\n\n\u0002\u0010\u0014\u001a\u0004\b\u0012\u0010\u0013R\u0015\u0010\t\u001a\u0004\u0018\u00010\b¢\u0006\n\n\u0002\u0010\u0014\u001a\u0004\b\u0015\u0010\u0013R\u0011\u0010\n\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u000e¨\u0006#"}, d2 = {"Lcom/discord/image/animated_image/apng/APNGView$Config;", "", "url", "", "animate", "", "showLoading", "widthDp", "", "heightDp", "cacheDirectory", "<init>", "(Ljava/lang/String;ZZLjava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;)V", "getUrl", "()Ljava/lang/String;", "getAnimate", "()Z", "getShowLoading", "getWidthDp", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getHeightDp", "getCacheDirectory", "component1", "component2", "component3", "component4", "component5", "component6", "copy", "(Ljava/lang/String;ZZLjava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;)Lcom/discord/image/animated_image/apng/APNGView$Config;", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "animated_image_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class Config {
        private final boolean animate;

        @NotNull
        private final String cacheDirectory;
        private final Integer heightDp;
        private final boolean showLoading;

        @NotNull
        private final String url;
        private final Integer widthDp;

        public Config(@NotNull String url, boolean z5, boolean z6, Integer num, Integer num2, @NotNull String cacheDirectory) {
            Intrinsics.checkNotNullParameter(url, "url");
            Intrinsics.checkNotNullParameter(cacheDirectory, "cacheDirectory");
            this.url = url;
            this.animate = z5;
            this.showLoading = z6;
            this.widthDp = num;
            this.heightDp = num2;
            this.cacheDirectory = cacheDirectory;
        }

        public static /* synthetic */ Config copy$default(Config config, String str, boolean z5, boolean z6, Integer num, Integer num2, String str2, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                str = config.url;
            }
            if ((i5 & 2) != 0) {
                z5 = config.animate;
            }
            if ((i5 & 4) != 0) {
                z6 = config.showLoading;
            }
            if ((i5 & 8) != 0) {
                num = config.widthDp;
            }
            if ((i5 & 16) != 0) {
                num2 = config.heightDp;
            }
            if ((i5 & 32) != 0) {
                str2 = config.cacheDirectory;
            }
            Integer num3 = num2;
            String str3 = str2;
            return config.copy(str, z5, z6, num, num3, str3);
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
        public final boolean getShowLoading() {
            return this.showLoading;
        }

        /* renamed from: component4, reason: from getter */
        public final Integer getWidthDp() {
            return this.widthDp;
        }

        /* renamed from: component5, reason: from getter */
        public final Integer getHeightDp() {
            return this.heightDp;
        }

        @NotNull
        /* renamed from: component6, reason: from getter */
        public final String getCacheDirectory() {
            return this.cacheDirectory;
        }

        @NotNull
        public final Config copy(@NotNull String url, boolean animate, boolean showLoading, Integer widthDp, Integer heightDp, @NotNull String cacheDirectory) {
            Intrinsics.checkNotNullParameter(url, "url");
            Intrinsics.checkNotNullParameter(cacheDirectory, "cacheDirectory");
            return new Config(url, animate, showLoading, widthDp, heightDp, cacheDirectory);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof Config)) {
                return false;
            }
            Config config = (Config) other;
            return Intrinsics.areEqual(this.url, config.url) && this.animate == config.animate && this.showLoading == config.showLoading && Intrinsics.areEqual(this.widthDp, config.widthDp) && Intrinsics.areEqual(this.heightDp, config.heightDp) && Intrinsics.areEqual(this.cacheDirectory, config.cacheDirectory);
        }

        public final boolean getAnimate() {
            return this.animate;
        }

        @NotNull
        public final String getCacheDirectory() {
            return this.cacheDirectory;
        }

        public final Integer getHeightDp() {
            return this.heightDp;
        }

        public final boolean getShowLoading() {
            return this.showLoading;
        }

        @NotNull
        public final String getUrl() {
            return this.url;
        }

        public final Integer getWidthDp() {
            return this.widthDp;
        }

        public int hashCode() {
            int d6 = d.d(d.d(this.url.hashCode() * 31, 31, this.animate), 31, this.showLoading);
            Integer num = this.widthDp;
            int hashCode = (d6 + (num == null ? 0 : num.hashCode())) * 31;
            Integer num2 = this.heightDp;
            return this.cacheDirectory.hashCode() + ((hashCode + (num2 != null ? num2.hashCode() : 0)) * 31);
        }

        @NotNull
        public String toString() {
            return "Config(url=" + this.url + ", animate=" + this.animate + ", showLoading=" + this.showLoading + ", widthDp=" + this.widthDp + ", heightDp=" + this.heightDp + ", cacheDirectory=" + this.cacheDirectory + ")";
        }

        public /* synthetic */ Config(String str, boolean z5, boolean z6, Integer num, Integer num2, String str2, int i5, DefaultConstructorMarker defaultConstructorMarker) {
            this(str, z5, (i5 & 4) != 0 ? true : z6, num, num2, str2);
        }
    }
}
