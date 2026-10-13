package androidx.appcompat.widget;

import android.content.res.TypedArray;
import android.text.method.KeyListener;
import android.text.method.NumberKeyListener;
import android.util.AttributeSet;
import android.view.inputmethod.EditorInfo;
import android.view.inputmethod.InputConnection;
import android.widget.EditText;
import java.util.concurrent.locks.ReentrantReadWriteLock;

/* loaded from: classes.dex */
public final class AppCompatEmojiEditTextHelper {
    public final EditText a;

    /* renamed from: b, reason: collision with root package name */
    public final u4.b f853b;

    public AppCompatEmojiEditTextHelper(EditText editText) {
        this.a = editText;
        this.f853b = new u4.b(editText);
    }

    public final KeyListener a(KeyListener keyListener) {
        if (keyListener instanceof NumberKeyListener) {
            return keyListener;
        }
        ((e4.r) this.f853b.f18810e).getClass();
        if (keyListener instanceof m2.e) {
            return keyListener;
        }
        if (keyListener == null) {
            return null;
        }
        return keyListener instanceof NumberKeyListener ? keyListener : new m2.e(keyListener);
    }

    public final void b(AttributeSet attributeSet, int i5) {
        TypedArray obtainStyledAttributes = this.a.getContext().obtainStyledAttributes(attributeSet, h.a.f9453i, i5, 0);
        try {
            boolean z5 = obtainStyledAttributes.hasValue(14) ? obtainStyledAttributes.getBoolean(14, true) : true;
            obtainStyledAttributes.recycle();
            d(z5);
        } catch (Throwable th2) {
            obtainStyledAttributes.recycle();
            throw th2;
        }
    }

    public final m2.b c(InputConnection inputConnection, EditorInfo editorInfo) {
        u4.b bVar = this.f853b;
        if (inputConnection == null) {
            bVar.getClass();
            inputConnection = null;
        } else {
            e4.r rVar = (e4.r) bVar.f18810e;
            rVar.getClass();
            if (!(inputConnection instanceof m2.b)) {
                inputConnection = new m2.b((EditText) rVar.f8000e, inputConnection, editorInfo);
            }
        }
        return (m2.b) inputConnection;
    }

    public final void d(boolean z5) {
        m2.i iVar = (m2.i) ((e4.r) this.f853b.f18810e).f8001i;
        if (iVar.f14325i != z5) {
            if (iVar.f14324e != null) {
                k2.j a = k2.j.a();
                m2.h hVar = iVar.f14324e;
                a.getClass();
                ta.a.k(hVar, "initCallback cannot be null");
                ReentrantReadWriteLock reentrantReadWriteLock = a.a;
                reentrantReadWriteLock.writeLock().lock();
                try {
                    a.f13125b.remove(hVar);
                } finally {
                    reentrantReadWriteLock.writeLock().unlock();
                }
            }
            iVar.f14325i = z5;
            if (z5) {
                m2.i.a(iVar.f14323d, k2.j.a().b());
            }
        }
    }
}
