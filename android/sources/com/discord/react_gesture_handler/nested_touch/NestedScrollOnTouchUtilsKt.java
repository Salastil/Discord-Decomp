package com.discord.react_gesture_handler.nested_touch;

import android.annotation.SuppressLint;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.TextView;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.recycler_view.utils.RecyclerViewExtensionsKt;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\u001a\u001e\u0010\u0004\u001a\u00020\u0005*\u00020\u00062\u0006\u0010\u0007\u001a\u00020\b2\b\u0010\t\u001a\u0004\u0018\u00010\nH\u0007\u001a \u0010\u000b\u001a\u00020\u0005*\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\b2\b\u0010\f\u001a\u0004\u0018\u00010\nH\u0007\u001a \u0010\r\u001a\u00020\u0005*\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\b2\b\u0010\u000e\u001a\u0004\u0018\u00010\u000fH\u0007\u001a\u0016\u0010\u0010\u001a\u00020\u0005*\u00020\u00112\b\b\u0002\u0010\u0007\u001a\u00020\bH\u0007\u001a\f\u0010\u0012\u001a\u00020\u0005*\u00020\u0006H\u0002\u001a\f\u0010\u0013\u001a\u00020\u000f*\u00020\u000fH\u0002\u001a\u000e\u0010\u0014\u001a\u0004\u0018\u00010\n*\u00020\u0006H\u0000\u001a\u000e\u0010\u0015\u001a\u0004\u0018\u00010\u000f*\u00020\u0006H\u0000\u001a\u000e\u0010\u0016\u001a\u0004\u0018\u00010\n*\u00020\u0006H\u0000\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0002\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0003\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0017"}, d2 = {"TAG_NESTED_CLICK_LISTENER", "", "TAG_NESTED_LONG_CLICK_LISTENER", "TAG_NESTED_DOUBLE_CLICK_LISTENER", "setOnDoubleClickListenerNested", "", "Landroid/view/View;", "viewManagesAccessibility", "", "onDoubleClickListener", "Landroid/view/View$OnClickListener;", "setOnClickListenerNested", "onClickListener", "setOnLongClickListenerNested", "onLongPress", "Landroid/view/View$OnLongClickListener;", "enableNestedSpanClickListener", "Landroid/widget/TextView;", "updateClickability", "updateWithOngoingGestureCancelling", "getNestedClickListener", "getNestedLongClickListener", "getNestedDoubleClickListener", "react_gesture_handler_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nNestedScrollOnTouchUtils.kt\nKotlin\n*S Kotlin\n*F\n+ 1 NestedScrollOnTouchUtils.kt\ncom/discord/react_gesture_handler/nested_touch/NestedScrollOnTouchUtilsKt\n+ 2 ViewUtils.kt\ncom/discord/misc/utilities/view/ViewUtilsKt\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,89:1\n33#2,2:90\n21#2,19:92\n1869#3,2:111\n*S KotlinDebug\n*F\n+ 1 NestedScrollOnTouchUtils.kt\ncom/discord/react_gesture_handler/nested_touch/NestedScrollOnTouchUtilsKt\n*L\n74#1:90,2\n74#1:92,19\n74#1:111,2\n*E\n"})
/* loaded from: classes.dex */
public final class NestedScrollOnTouchUtilsKt {
    private static final int TAG_NESTED_CLICK_LISTENER = -111001;
    private static final int TAG_NESTED_DOUBLE_CLICK_LISTENER = -111003;
    private static final int TAG_NESTED_LONG_CLICK_LISTENER = -111002;

    @SuppressLint({"ClickableViewAccessibility"})
    public static final void enableNestedSpanClickListener(@NotNull TextView textView, boolean z5) {
        Intrinsics.checkNotNullParameter(textView, "<this>");
        textView.setOnTouchListener(new NestedScrollOnTouchListener(textView, z5));
    }

    public static /* synthetic */ void enableNestedSpanClickListener$default(TextView textView, boolean z5, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            z5 = false;
        }
        enableNestedSpanClickListener(textView, z5);
    }

    public static final View.OnClickListener getNestedClickListener(@NotNull View view) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        Object tag = view.getTag(TAG_NESTED_CLICK_LISTENER);
        if (tag instanceof View.OnClickListener) {
            return (View.OnClickListener) tag;
        }
        return null;
    }

    public static final View.OnClickListener getNestedDoubleClickListener(@NotNull View view) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        Object tag = view.getTag(TAG_NESTED_DOUBLE_CLICK_LISTENER);
        if (tag instanceof View.OnClickListener) {
            return (View.OnClickListener) tag;
        }
        return null;
    }

    public static final View.OnLongClickListener getNestedLongClickListener(@NotNull View view) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        Object tag = view.getTag(TAG_NESTED_LONG_CLICK_LISTENER);
        if (tag instanceof View.OnLongClickListener) {
            return (View.OnLongClickListener) tag;
        }
        return null;
    }

    public static final void setOnClickListenerNested(@NotNull View view, boolean z5, View.OnClickListener onClickListener) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        view.setTag(TAG_NESTED_CLICK_LISTENER, onClickListener);
        view.setOnTouchListener(new NestedScrollOnTouchListener(view, z5));
        updateClickability(view);
    }

    public static /* synthetic */ void setOnClickListenerNested$default(View view, boolean z5, View.OnClickListener onClickListener, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            z5 = false;
        }
        setOnClickListenerNested(view, z5, onClickListener);
    }

    public static final void setOnDoubleClickListenerNested(@NotNull View view, boolean z5, View.OnClickListener onClickListener) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        view.setTag(TAG_NESTED_DOUBLE_CLICK_LISTENER, onClickListener);
        view.setOnTouchListener(new NestedScrollOnTouchListener(view, z5));
        updateClickability(view);
    }

    public static final void setOnLongClickListenerNested(@NotNull View view, boolean z5, View.OnLongClickListener onLongClickListener) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        view.setTag(TAG_NESTED_LONG_CLICK_LISTENER, onLongClickListener != null ? updateWithOngoingGestureCancelling(onLongClickListener) : null);
        view.setOnTouchListener(new NestedScrollOnTouchListener(view, z5));
        updateClickability(view);
    }

    public static /* synthetic */ void setOnLongClickListenerNested$default(View view, boolean z5, View.OnLongClickListener onLongClickListener, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            z5 = false;
        }
        setOnLongClickListenerNested(view, z5, onLongClickListener);
    }

    private static final void updateClickability(View view) {
        boolean z5 = (view.getTag(TAG_NESTED_CLICK_LISTENER) == null && view.getTag(TAG_NESTED_LONG_CLICK_LISTENER) == null && view.getTag(TAG_NESTED_DOUBLE_CLICK_LISTENER) == null) ? false : true;
        view.setClickable(z5);
        view.setFocusable(z5);
    }

    private static final View.OnLongClickListener updateWithOngoingGestureCancelling(final View.OnLongClickListener onLongClickListener) {
        return new View.OnLongClickListener() { // from class: com.discord.react_gesture_handler.nested_touch.b
            @Override // android.view.View.OnLongClickListener
            public final boolean onLongClick(View view) {
                boolean updateWithOngoingGestureCancelling$lambda$1;
                updateWithOngoingGestureCancelling$lambda$1 = NestedScrollOnTouchUtilsKt.updateWithOngoingGestureCancelling$lambda$1(onLongClickListener, view);
                return updateWithOngoingGestureCancelling$lambda$1;
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x0040, code lost:
    
        r1 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:59:0x002f, code lost:
    
        r2 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x0015, code lost:
    
        r1 = null;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final boolean updateWithOngoingGestureCancelling$lambda$1(View.OnLongClickListener onLongClickListener, View view) {
        ViewGroup viewGroup;
        RecyclerView recyclerView;
        View view2;
        Intrinsics.checkNotNull(view);
        ArrayList arrayList = new ArrayList();
        ViewParent parent = view.getParent();
        if (parent instanceof ViewGroup) {
            viewGroup = (ViewGroup) parent;
            while (true) {
                if (viewGroup != null) {
                    recyclerView = (RecyclerView) (!(viewGroup instanceof RecyclerView) ? null : viewGroup);
                    if (recyclerView != null) {
                        break;
                    }
                    ViewParent parent2 = viewGroup.getParent();
                    if (parent2 instanceof ViewGroup) {
                        viewGroup = (ViewGroup) parent2;
                    }
                }
                recyclerView = null;
                break;
            }
            while (recyclerView != null) {
                arrayList.add(recyclerView);
                ViewParent parent3 = recyclerView.getParent();
                if (parent3 instanceof ViewGroup) {
                    view2 = (ViewGroup) parent3;
                    while (true) {
                        if (view2 == null) {
                            recyclerView = null;
                            break;
                        }
                        recyclerView = (RecyclerView) (!(view2 instanceof RecyclerView) ? null : view2);
                        if (recyclerView != null) {
                            break;
                        }
                        ViewParent parent4 = view2.getParent();
                        if (parent4 instanceof ViewGroup) {
                            view2 = (ViewGroup) parent4;
                        }
                    }
                }
                view2 = null;
            }
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                RecyclerViewExtensionsKt.toggleSuppressLayout((RecyclerView) it.next());
            }
            return onLongClickListener.onLongClick(view);
        }
        viewGroup = null;
    }
}
