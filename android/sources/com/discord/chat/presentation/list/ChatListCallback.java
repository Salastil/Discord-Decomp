package com.discord.chat.presentation.list;

import android.graphics.Canvas;
import android.util.Pair;
import androidx.core.view.s0;
import androidx.recyclerview.widget.RecyclerView;
import androidx.recyclerview.widget.h0;
import com.discord.chat.presentation.list.ChatListItemTouchHelper;
import java.util.List;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
abstract class ChatListCallback extends h0 {
    public final int getAbsoluteMovementFlags(RecyclerView recyclerView, RecyclerView.ViewHolder viewHolder) {
        int movementFlags = getMovementFlags(recyclerView, viewHolder);
        WeakHashMap weakHashMap = s0.a;
        return convertToAbsoluteDirection(movementFlags, recyclerView.getLayoutDirection());
    }

    public Pair getEffectiveDxDy(float f2, float f10) {
        return new Pair(Float.valueOf(f2), Float.valueOf(f10));
    }

    public boolean hasDragFlag(RecyclerView recyclerView, RecyclerView.ViewHolder viewHolder) {
        return (getAbsoluteMovementFlags(recyclerView, viewHolder) & 16711680) != 0;
    }

    public void onDraw(Canvas canvas, RecyclerView recyclerView, RecyclerView.ViewHolder viewHolder, List<ChatListItemTouchHelper.RecoverAnimation> list, int i5, float f2, float f10) {
        int size = list.size();
        for (int i6 = 0; i6 < size; i6++) {
            ChatListItemTouchHelper.RecoverAnimation recoverAnimation = list.get(i6);
            recoverAnimation.update();
            int save = canvas.save();
            onChildDraw(canvas, recyclerView, recoverAnimation.mViewHolder, recoverAnimation.mX, recoverAnimation.mY, recoverAnimation.mActionState, false);
            canvas.restoreToCount(save);
        }
        if (viewHolder != null) {
            int save2 = canvas.save();
            onChildDraw(canvas, recyclerView, viewHolder, f2, f10, i5, true);
            canvas.restoreToCount(save2);
        }
    }

    public void onDrawOver(Canvas canvas, RecyclerView recyclerView, RecyclerView.ViewHolder viewHolder, List<ChatListItemTouchHelper.RecoverAnimation> list, int i5, float f2, float f10) {
        int size = list.size();
        boolean z5 = false;
        for (int i6 = 0; i6 < size; i6++) {
            ChatListItemTouchHelper.RecoverAnimation recoverAnimation = list.get(i6);
            int save = canvas.save();
            onChildDrawOver(canvas, recyclerView, recoverAnimation.mViewHolder, recoverAnimation.mX, recoverAnimation.mY, recoverAnimation.mActionState, false);
            canvas.restoreToCount(save);
        }
        if (viewHolder != null) {
            int save2 = canvas.save();
            onChildDrawOver(canvas, recyclerView, viewHolder, f2, f10, i5, true);
            canvas.restoreToCount(save2);
        }
        for (int i10 = size - 1; i10 >= 0; i10--) {
            ChatListItemTouchHelper.RecoverAnimation recoverAnimation2 = list.get(i10);
            boolean z6 = recoverAnimation2.mEnded;
            if (z6 && !recoverAnimation2.mIsPendingCleanup) {
                list.remove(i10);
            } else if (!z6) {
                z5 = true;
            }
        }
        if (z5) {
            recyclerView.invalidate();
        }
    }

    public abstract void onReleased(RecyclerView recyclerView, RecyclerView.ViewHolder viewHolder);

    public boolean shouldReturnToOriginalPosition() {
        return false;
    }

    /* renamed from: shouldUseSpringyExit */
    public boolean getShouldTriggerReply() {
        return false;
    }
}
