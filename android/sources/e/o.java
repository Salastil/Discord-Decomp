package e;

import androidx.activity.BackEventCompat;
import androidx.activity.OnBackPressedCallback;
import androidx.activity.OnBackPressedDispatcher;
import java.util.ListIterator;
import kotlin.Unit;
import kotlin.collections.ArrayDeque;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class o extends Lambda implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7820d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ OnBackPressedDispatcher f7821e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ o(OnBackPressedDispatcher onBackPressedDispatcher, int i5) {
        super(1);
        this.f7820d = i5;
        this.f7821e = onBackPressedDispatcher;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Object obj2;
        Object obj3;
        switch (this.f7820d) {
            case 0:
                BackEventCompat backEvent = (BackEventCompat) obj;
                Intrinsics.checkNotNullParameter(backEvent, "backEvent");
                OnBackPressedDispatcher onBackPressedDispatcher = this.f7821e;
                ArrayDeque arrayDeque = onBackPressedDispatcher.f740b;
                ListIterator listIterator = arrayDeque.listIterator(arrayDeque.size());
                while (true) {
                    if (listIterator.hasPrevious()) {
                        obj2 = listIterator.previous();
                        if (((OnBackPressedCallback) obj2).isEnabled()) {
                        }
                    } else {
                        obj2 = null;
                    }
                }
                OnBackPressedCallback onBackPressedCallback = (OnBackPressedCallback) obj2;
                if (onBackPressedDispatcher.f741c != null) {
                    onBackPressedDispatcher.c();
                }
                onBackPressedDispatcher.f741c = onBackPressedCallback;
                if (onBackPressedCallback != null) {
                    onBackPressedCallback.handleOnBackStarted(backEvent);
                }
                break;
            default:
                BackEventCompat backEvent2 = (BackEventCompat) obj;
                Intrinsics.checkNotNullParameter(backEvent2, "backEvent");
                OnBackPressedDispatcher onBackPressedDispatcher2 = this.f7821e;
                OnBackPressedCallback onBackPressedCallback2 = onBackPressedDispatcher2.f741c;
                if (onBackPressedCallback2 == null) {
                    ArrayDeque arrayDeque2 = onBackPressedDispatcher2.f740b;
                    ListIterator listIterator2 = arrayDeque2.listIterator(arrayDeque2.size());
                    while (true) {
                        if (listIterator2.hasPrevious()) {
                            obj3 = listIterator2.previous();
                            if (((OnBackPressedCallback) obj3).isEnabled()) {
                            }
                        } else {
                            obj3 = null;
                        }
                    }
                    onBackPressedCallback2 = (OnBackPressedCallback) obj3;
                }
                if (onBackPressedCallback2 != null) {
                    onBackPressedCallback2.handleOnBackProgressed(backEvent2);
                }
                break;
        }
        return Unit.a;
    }
}
