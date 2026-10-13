package com.discord.chat.presentation.message.view.voicemessages;

import a1.k;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.animation.Animation;
import android.widget.LinearLayout;
import com.discord.misc.utilities.coroutines.AttachedViewCoroutineScope;
import com.discord.misc.utilities.coroutines.CoroutineViewUtilsKt;
import java.util.concurrent.CancellationException;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.Job;
import nr.g0;
import nr.x;
import sr.q;
import yo.j;

@Metadata(d1 = {"\u00005\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0010\u0007\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000*\u0001\u0000\b\n\u0018\u00002\u00020\u0001J\u0018\u0010\u0010\u001a\u00020\u00032\u0006\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u0014H\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u001e\u0010\u0005\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0003@BX\u0082\u000e¢\u0006\b\n\u0000\"\u0004\b\u0006\u0010\u0007R\u000e\u0010\b\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\nX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\nX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\f\u001a\u0004\u0018\u00010\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"com/discord/chat/presentation/message/view/voicemessages/AudioPlayerView$configureGestures$onTouchListener$1", "Landroid/view/View$OnTouchListener;", "isLongPress", "", "value", "isScrubbing", "setScrubbing", "(Z)V", "hasMoved", "initialX", "", "initialY", "longPressJob", "Lkotlinx/coroutines/Job;", "longPressRunnable", "Ljava/lang/Runnable;", "onTouch", "view", "Landroid/view/View;", "event", "Landroid/view/MotionEvent;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nAudioPlayerView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 AudioPlayerView.kt\ncom/discord/chat/presentation/message/view/voicemessages/AudioPlayerView$configureGestures$onTouchListener$1\n+ 2 View.kt\nandroidx/core/view/ViewKt\n*L\n1#1,740:1\n255#2:741\n*S KotlinDebug\n*F\n+ 1 AudioPlayerView.kt\ncom/discord/chat/presentation/message/view/voicemessages/AudioPlayerView$configureGestures$onTouchListener$1\n*L\n226#1:741\n*E\n"})
/* loaded from: classes.dex */
public final class AudioPlayerView$configureGestures$onTouchListener$1 implements View.OnTouchListener {
    private boolean hasMoved;
    private float initialX;
    private float initialY;
    private boolean isLongPress;
    private boolean isScrubbing;
    private Job longPressJob;
    private final Runnable longPressRunnable;
    final /* synthetic */ AudioPlayerView this$0;

    public AudioPlayerView$configureGestures$onTouchListener$1(AudioPlayerView audioPlayerView) {
        this.this$0 = audioPlayerView;
        this.longPressRunnable = new k(12, this, audioPlayerView);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void longPressRunnable$lambda$0(AudioPlayerView$configureGestures$onTouchListener$1 audioPlayerView$configureGestures$onTouchListener$1, AudioPlayerView audioPlayerView) {
        View.OnLongClickListener onLongClickListener;
        if (audioPlayerView$configureGestures$onTouchListener$1.hasMoved) {
            return;
        }
        audioPlayerView$configureGestures$onTouchListener$1.isLongPress = true;
        onLongClickListener = audioPlayerView.onLongPress;
        if (onLongClickListener != null) {
            onLongClickListener.onLongClick(audioPlayerView.getBinding().audioProgressView);
        }
    }

    private final void setScrubbing(boolean z5) {
        if (this.isScrubbing != z5) {
            this.isScrubbing = z5;
            LinearLayout audioDetailsView = this.this$0.getBinding().audioDetailsView;
            Intrinsics.checkNotNullExpressionValue(audioDetailsView, "audioDetailsView");
            if (audioDetailsView.getVisibility() == 0) {
                this.this$0.getBinding().audioProgressBar.setScrubbing$chat_release(z5);
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:6:0x0055, code lost:
    
        if (r2 != 3) goto L44;
     */
    @Override // android.view.View.OnTouchListener
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean onTouch(View view, MotionEvent event) {
        Animation bounceAnimator;
        AudioPlayerViewState audioPlayerViewState;
        AudioPlayerViewState audioPlayerViewState2;
        boolean z5;
        AudioPlayerViewState audioPlayerViewState3;
        AudioPlayerViewState audioPlayerViewState4;
        AudioPlayerViewState audioPlayerViewState5;
        boolean z6;
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(event, "event");
        float c6 = j.c(event.getX(), 0.0f, this.this$0.getBinding().audioProgressView.getWidth()) / this.this$0.getBinding().audioProgressView.getWidth();
        float abs = Math.abs(event.getX() - this.initialX);
        int scaledTouchSlop = ViewConfiguration.get(view.getContext()).getScaledTouchSlop();
        int action = event.getAction();
        if (action == 0) {
            this.initialX = event.getX();
            this.initialY = event.getY();
            setScrubbing(false);
            this.hasMoved = false;
            this.isLongPress = false;
            this.this$0.getBinding().audioProgressView.requestDisallowInterceptTouchEvent(true);
            AttachedViewCoroutineScope attachedScope = CoroutineViewUtilsKt.getAttachedScope(this.this$0);
            ur.e eVar = g0.a;
            this.longPressJob = x.t(attachedScope, q.a, new AudioPlayerView$configureGestures$onTouchListener$1$onTouch$1(this, null), 2);
            return true;
        }
        if (action != 1) {
            if (action == 2) {
                if (!this.isScrubbing && abs > scaledTouchSlop) {
                    this.hasMoved = true;
                    z6 = this.this$0.isScrubbingEnabled;
                    if (!z6) {
                        return false;
                    }
                    setScrubbing(true);
                    this.this$0.pauseForScrubbing();
                }
                if (this.isScrubbing) {
                    Job job = this.longPressJob;
                    if (job != null) {
                        CancellationException cancellationException = new CancellationException("scrubbing");
                        cancellationException.initCause(null);
                        job.f(cancellationException);
                    }
                    this.this$0.onAudioProgressChange(new AudioProgressEvent(c6, event.getAction()));
                    return true;
                }
            }
            return true;
        }
        Job job2 = this.longPressJob;
        if (job2 != null) {
            job2.f(null);
        }
        if (this.isScrubbing) {
            this.this$0.onAudioProgressChange(new AudioProgressEvent(c6, event.getAction()));
            setScrubbing(false);
            return true;
        }
        if (!this.isLongPress && !this.hasMoved) {
            View view2 = this.this$0.getBinding().buttonContainer;
            bounceAnimator = this.this$0.getBounceAnimator();
            view2.startAnimation(bounceAnimator);
            audioPlayerViewState = this.this$0.state;
            if (audioPlayerViewState.getPlayer$chat_release() == null) {
                AudioPlayerView audioPlayerView = this.this$0;
                audioPlayerViewState5 = audioPlayerView.state;
                audioPlayerView.prepareAudio(audioPlayerViewState5);
                return true;
            }
            audioPlayerViewState2 = this.this$0.state;
            z5 = this.this$0.wasPlayingBeforeBeingPaused;
            if (!audioPlayerViewState2.isPlaying$chat_release(z5)) {
                audioPlayerViewState4 = this.this$0.state;
                audioPlayerViewState4.play$chat_release();
                return true;
            }
            audioPlayerViewState3 = this.this$0.state;
            audioPlayerViewState3.pause$chat_release();
        }
        return true;
    }
}
